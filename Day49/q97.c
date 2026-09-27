/*
Q97 (Strings): Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[1000];
    if (fgets(line, sizeof(line), stdin)) {
        char *token = strtok(line, " \t\r\n");
        while (token != NULL) {
            printf("%c.", toupper(token[0]));
            token = strtok(NULL, " \t\r\n");
        }
        printf("\n");
    }
    return 0;
}
