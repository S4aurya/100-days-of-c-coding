/*
Q94 (Strings): Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    if (fgets(line, sizeof(line), stdin)) {
        char longest[1000] = "";
        int max_len = 0;
        char *token = strtok(line, " \t\r\n");
        while (token != NULL) {
            if ((int)strlen(token) > max_len) {
                max_len = strlen(token);
                strcpy(longest, token);
            }
            token = strtok(NULL, " \t\r\n");
        }
        printf("%s\n", longest);
    }
    return 0;
}
