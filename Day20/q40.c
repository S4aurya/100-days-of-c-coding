/*
Q40 (Loops without Arrays/Strings): Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[64];
    if (scanf("%63s", s) == 1) {
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == '0') {
                putchar('1');
            } else if (s[i] == '1') {
                putchar('0');
            }
        }
        putchar('\n');
    }
    return 0;
}
