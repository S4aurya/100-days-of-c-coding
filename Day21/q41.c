/*
Q41 (Loops without Arrays/Strings): Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[64];
    if (scanf("%63s", s) == 1) {
        int len = strlen(s);
        if (len > 1) {
            char temp = s[0];
            s[0] = s[len - 1];
            s[len - 1] = temp;
        }
        printf("%s\n", s);
    }
    return 0;
}
