/*
Q47 (Nested Loops without Arrays/Strings): Write a program to print the following pattern:
*
**
***
****
*****

Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/

#include <stdio.h>

int main() {
    int n = 5;
    scanf("%d", &n);
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
