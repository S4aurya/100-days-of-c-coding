/*
Q68 (Arrays (1D)): Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[1000];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int pos;
        if (scanf("%d", &pos) == 1) {
            if (pos >= 0 && pos < n) {
                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
            }
            for (int i = 0; i < n; i++) {
                printf("%d%c", arr[i], (i == n - 1 ? '\n' : ' '));
            }
        }
    }
    return 0;
}
