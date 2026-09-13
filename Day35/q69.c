/*
Q69 (Arrays (1D)): Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int max1 = INT_MIN, max2 = INT_MIN;
        for (int i = 0; i < n; i++) {
            int val;
            scanf("%d", &val);
            if (val > max1) {
                max2 = max1;
                max1 = val;
            } else if (val > max2 && val != max1) {
                max2 = val;
            }
        }
        printf("%d\n", max2);
    }
    return 0;
}
