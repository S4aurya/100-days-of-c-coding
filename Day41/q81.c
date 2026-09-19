/*
Q81 (Strings): Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:

Output 2:
1

*/

#include <stdio.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        int count = 0;
        while (s[count] != '\0' && s[count] != '\n' && s[count] != '\r') {
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
