#include <stdio.h>
#include <stdlib.h>

void GE(int m, int n, int matrix[m - 1][m]) {
    for (int i = 0; i < n - 1; i++) {
        int pivot = matrix[i][i];

        for (int j = i + 1; j < n; j++) {
            int coef = matrix[j][i] / pivot;
            if (coef < 0) coef = -coef;
            int test = 0;

            for (int k = i; k < m; k++) {
                if (k == i) {
                    if ((((matrix[j][k] < 0) && (matrix[i][k] < 0)) || ((matrix[j][k] >= 0) && (matrix[i][k] >= 0)))) test = 0;
                    else test = 1;
                }
                if (test == 0) {
                    matrix[j][k] = matrix[j][k] - (coef * matrix[i][k]);
                }
                else  {
                    matrix[j][k] = matrix[j][k] + (coef * matrix[i][k]);
                }
            }
        }
    }
}

void unknowns(int n, int unknown[], int matrix[n][n + 1]) {
    unknown[n - 1] = matrix[n - 1][n] / matrix[n - 1][n - 1];
    for(int i = n - 2; i >= 0; i--) {
        int sum = 0;
        for (int j = i + 1; j < n; j ++) {
            sum = sum - (matrix[i][j] * unknown[j]);
        }
        sum = matrix[i][n] + sum;
        unknown[i] = sum / matrix[i][i];
    }

    for (int k = 0; k < n; k++) {
        printf("X%d = %d\n", k + 1, unknown[k]);
    }
}

int main(int n, char *args[n]) {
    int input[n - 2];
    int m = atoi(args[1]) + 1;
    
    for (int i = 2; i < n; i++) {
        input[i - 2] = atoi(args[i]);
    }

    int matrix[m - 1][m];
    for (int a = 0; a < m - 1; a++) {
        for (int b = 0; b < m; b++) {
            matrix[a][b] = input[(a * m) + b];
        }
    }
 
    GE(m, m - 1, matrix);
    int unknown[m - 1];
    unknowns(m - 1, unknown, matrix);
}
