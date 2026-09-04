/*
Q52 (Nested Loops without Arrays/Strings): Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    int lines[] = {1, 3, 5, 3, 1};
    for (int idx = 0; idx < 5; idx++) {
        for (int i = 0; i < lines[idx]; i++) {
            puts("*");
        }
        if (idx < 4) puts("");
    }
    return 0;
}
