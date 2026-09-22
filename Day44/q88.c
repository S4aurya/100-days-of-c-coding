/*
Q88 (Strings): Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
            if (s[i] == ' ') {
                putchar('-');
            } else {
                putchar(s[i]);
            }
        }
        putchar('\n');
    }
    return 0;
}
