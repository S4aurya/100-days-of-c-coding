/*
Q101 (Logic Enhancers): Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[2000];
    if (fgets(line, sizeof(line), stdin)) {
        int nums[1000], n = 0, target = 0;
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
        char *t_ptr = strstr(line, "target");
        if (t_ptr) {
            while (*t_ptr && (*t_ptr < '0' || *t_ptr > '9') && *t_ptr != '-') t_ptr++;
            target = atoi(t_ptr);
        }
        int first = -1, last = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                if (first == -1) first = i;
                last = i;
            }
        }
        printf("%d,%d\n", first, last);
    }
    return 0;
}
