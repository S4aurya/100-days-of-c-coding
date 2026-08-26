/*
Q33 (Loops without Arrays/Strings): Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int original = n;
        int count = 0;
        int temp = n;
        while (temp > 0) {
            count++;
            temp /= 10;
        }
        temp = n;
        int sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            int p = 1;
            for (int i = 0; i < count; i++) p *= digit;
            sum += p;
            temp /= 10;
        }
        if (sum == original) {
            printf("Armstrong\n");
        } else {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}
