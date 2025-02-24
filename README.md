GE.c uses gaussian elimination to solve a given linear system.

Input:
./GE MATRIX M       ,where M is the width of the matrix and MATRIX is the matrix in the form ROW1ROW2ROW3...

Example Input:
The Matix: | 1 2 3 4 |
           | 5 6 7 8 |
           | 9 0 1 2 |
would have the input: ./GE 123456789012 4

Important Information:
This will only work on standard matrices, i.e. this program will not use equation interchange or any other
method to reach a solution. Therefore, this program will give the incorrect solution for certain matrices.

This program has not been extensively tested and may not produce the correct solutions for all standard
matrices.
