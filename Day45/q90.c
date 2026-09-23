/*
Q90 (Strings): Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
            if (islower(s[i])) {
                putchar(toupper(s[i]));
            } else if (isupper(s[i])) {
                putchar(tolower(s[i]));
            } else {
                putchar(s[i]);
            }
        }
        putchar('\n');
    }
    return 0;
}
