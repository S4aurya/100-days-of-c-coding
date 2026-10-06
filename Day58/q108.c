/*
Q108 (Logic Enhancers): Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

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
        printf("[");
        for (int i = 0; i < n; i++) {
            long long prod = 1;
            for (int j = 0; j < n; j++) {
                if (i != j) prod *= nums[j];
            }
            printf("%lld%s", prod, (i == n - 1 ? "" : ","));
        }
        printf("]\n");
    }
    return 0;
}
