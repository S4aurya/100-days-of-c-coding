/*
Q85 (Strings): Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        int len = strlen(s);
        while (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r')) len--;
        for (int i = len - 1; i >= 0; i--) {
            putchar(s[i]);
        }
        putchar('\n');
    }
    return 0;
}
