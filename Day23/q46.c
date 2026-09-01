/*
Q46 (Nested Loops without Arrays/Strings): Write a program to print the following pattern:
*****
*****
*****
*****
*****

Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/

#include <stdio.h>

int main() {
    int n = 5;
    scanf("%d", &n); // Optional input
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
