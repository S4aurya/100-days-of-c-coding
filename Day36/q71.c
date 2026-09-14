/*
Q71 (2D Arrays): Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                int val;
                scanf("%d", &val);
                printf("%d%c", val, (j == c - 1 ? '\n' : ' '));
            }
        }
    }
    return 0;
}
