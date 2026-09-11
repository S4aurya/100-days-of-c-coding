/*
Q65 (Arrays (1D)): Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[1000];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int target;
        if (scanf("%d", &target) == 1) {
            int low = 0, high = n - 1, found = -1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (arr[mid] == target) {
                    found = mid;
                    break;
                } else if (arr[mid] < target) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            if (found != -1) {
                printf("Found at index %d\n", found);
            } else {
                printf("-1\n");
            }
        }
    }
    return 0;
}
