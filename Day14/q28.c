/*
Q28 (Loops without Arrays/Strings): Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        long long prod = 1;
        for (int i = 2; i <= n; i += 2) {
            prod *= i;
        }
        printf("%lld\n", prod);
    }
    return 0;
}
