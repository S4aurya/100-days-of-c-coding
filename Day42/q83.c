/*
Q83 (Strings): Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        int vowels = 0, consonants = 0;
        for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
            char ch = tolower(s[i]);
            if (ch >= 'a' && ch <= 'z') {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }
        printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    }
    return 0;
}
