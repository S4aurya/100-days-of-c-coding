/*
Q63 (Arrays (1D)): Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int n1, n2;
    int arr1[1000], arr2[1000];
    if (scanf("%d", &n1) == 1) {
        for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);
        if (scanf("%d", &n2) == 1) {
            for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);
            for (int i = 0; i < n1; i++) printf("%d ", arr1[i]);
            for (int i = 0; i < n2; i++) printf("%d%c", arr2[i], (i == n2 - 1 ? '\n' : ' '));
        }
    }
    return 0;
}
