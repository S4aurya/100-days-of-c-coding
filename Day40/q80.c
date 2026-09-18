/*
Q80 (2D Arrays): Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int a[50][50], b[50][50], res[50][50] = {0};
    if (scanf("%d %d", &r1, &c1) == 2) {
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) scanf("%d", &a[i][j]);
        }
        if (scanf("%d %d", &r2, &c2) == 2) {
            for (int i = 0; i < r2; i++) {
                for (int j = 0; j < c2; j++) scanf("%d", &b[i][j]);
            }
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    int sum = 0;
                    for (int k = 0; k < c1; k++) {
                        sum += a[i][k] * b[k][j];
                    }
                    res[i][j] = sum;
                }
            }
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    printf("%d%c", res[i][j], (j == c2 - 1 ? '\n' : ' '));
                }
            }
        }
    }
    return 0;
}
