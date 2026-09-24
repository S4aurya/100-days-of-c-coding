/*
Q92 (Strings): Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char s[1000];
    if (scanf("%999s", s) == 1) {
        int count[26] = {0};
        char ans = '\0';
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                count[s[i] - 'a']++;
                if (count[s[i] - 'a'] == 2) {
                    ans = s[i];
                    break;
                }
            }
        }
        if (ans != '\0') {
            printf("%c\n", ans);
        } else {
            printf("None\n");
        }
    }
    return 0;
}
