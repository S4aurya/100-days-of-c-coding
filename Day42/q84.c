/*
Q84 (Strings): Convert a lowercase string to uppercase without using built-in functions.

Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                putchar(s[i] - ('a' - 'A'));
            } else {
                putchar(s[i]);
            }
        }
        putchar('\n');
    }
    return 0;
}
