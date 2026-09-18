/*
Q79 (2D Arrays): Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        int mat[50][50];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &mat[i][j]);
            }
        }
        int first = 1;
        for (int k = 0; k < r + c - 1; k++) {
            if (k % 2 == 0) {
                // Moving upwards
                int i = (k < r) ? k : r - 1;
                int j = k - i;
                while (i >= 0 && j < c) {
                    if (!first) printf(" ");
                    printf("%d", mat[i][j]);
                    first = 0;
                    i--;
                    j++;
                }
            } else {
                // Moving downwards
                int j = (k < c) ? k : c - 1;
                int i = k - j;
                while (j >= 0 && i < r) {
                    if (!first) printf(" ");
                    printf("%d", mat[i][j]);
                    first = 0;
                    i++;
                    j--;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
