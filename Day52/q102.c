/*
Q102 (Logic Enhancers): Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[2000];
    if (fgets(line, sizeof(line), stdin)) {
        int arr[1000], n = 0, x = 0;
        char *ptr = line;
        while (*ptr && *ptr != '[') ptr++;
        if (*ptr == '[') {
            ptr++;
            while (*ptr && *ptr != ']') {
                char *end;
                long val = strtol(ptr, &end, 10);
                if (end != ptr) {
                    arr[n++] = (int)val;
                    ptr = end;
                } else {
                    ptr++;
                }
            }
        }
        char *x_ptr = strstr(line, "x");
        if (x_ptr) {
            while (*x_ptr && (*x_ptr < '0' || *x_ptr > '9') && *x_ptr != '-') x_ptr++;
            x = atoi(x_ptr);
        }
        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= x) {
                ans = i;
                break;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
