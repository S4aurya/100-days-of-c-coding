/*
Q96 (Strings): Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    if (fgets(line, sizeof(line), stdin)) {
        int len = strlen(line);
        while (len > 0 && (line[len - 1] == '\n' || line[len - 1] == '\r')) len--;
        line[len] = '\0';
        
        int i = 0;
        while (i < len) {
            if (line[i] == ' ') {
                putchar(' ');
                i++;
                continue;
            }
            int start = i;
            while (i < len && line[i] != ' ') i++;
            for (int k = i - 1; k >= start; k--) {
                putchar(line[k]);
            }
        }
        putchar('\n');
    }
    return 0;
}
