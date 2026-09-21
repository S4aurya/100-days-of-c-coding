/*
Q86 (Strings): Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        int len = strlen(s);
        while (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r')) len--;
        int is_palindrome = 1;
        for (int i = 0; i < len / 2; i++) {
            if (s[i] != s[len - 1 - i]) {
                is_palindrome = 0;
                break;
            }
        }
        printf("%s\n", is_palindrome ? "Palindrome" : "Not palindrome");
    }
    return 0;
}
