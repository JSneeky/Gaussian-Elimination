GaussianElimination.c uses gaussian elimination to solve a given linear system.

Input:
./GaussianElimination U MATRIX       ,where U is the number of unknowns and MATRIX is the matrix in the form a11 a12 a13 ... a1n a21...

Example Input:
The Matix: | 1 1 1  2 |
           | 1 3 3  0 |
           | 1 5 6 -1 |
would have the input: ./GaussianElimination 3 1 1 1 2 1 3 3 0 1 5 6 -1
U = 3;
MATRIX = 1 1 1 2 1 3 3 0 1 5 6 -1;

This will give the output:
X1 = 3
X2 = -2
X3 = 1

Important Information:
This will only work on standard matrices, i.e. this program will not use equation interchange or any other
method to reach a solution. Therefore, this program will give the incorrect solution for certain matrices.

This program has not been extensively tested and may not produce the correct solutions for all standard
matrices.
