/*
Q87 (Strings): Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        int spaces = 0, digits = 0, special = 0;
        for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
            if (s[i] == ' ') {
                spaces++;
            } else if (isdigit(s[i])) {
                digits++;
            } else if (!isalpha(s[i])) {
                special++;
            }
        }
        printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    }
    return 0;
}
