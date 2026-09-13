/*
Q70 (Arrays (1D)): Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[1000], res[1000];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int k;
        if (scanf("%d", &k) == 1) {
            k = k % n;
            for (int i = 0; i < n; i++) {
                res[(i + k) % n] = arr[i];
            }
            for (int i = 0; i < n; i++) {
                printf("%d%c", res[i], (i == n - 1 ? '\n' : ' '));
            }
        }
    }
    return 0;
}
