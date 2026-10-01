/*
Q103 (Logic Enhancers): Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[2000];
    if (fgets(line, sizeof(line), stdin)) {
        int nums[1000], n = 0;
        char *ptr = line;
        while (*ptr && *ptr != '[') ptr++;
        if (*ptr == '[') {
            ptr++;
            while (*ptr && *ptr != ']') {
                char *end;
                long val = strtol(ptr, &end, 10);
                if (end != ptr) {
                    nums[n++] = (int)val;
                    ptr = end;
                } else {
                    ptr++;
                }
            }
        }
        long long total = 0;
        for (int i = 0; i < n; i++) total += nums[i];
        long long left_sum = 0;
        int pivot = -1;
        for (int i = 0; i < n; i++) {
            if (left_sum == total - left_sum - nums[i]) {
                pivot = i;
                break;
            }
            left_sum += nums[i];
        }
        printf("%d\n", pivot);
    }
    return 0;
}
