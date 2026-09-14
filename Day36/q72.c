/*
Q72 (2D Arrays): Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        long long sum = 0;
        for (int i = 0; i < r * c; i++) {
            int val;
            scanf("%d", &val);
            sum += val;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
