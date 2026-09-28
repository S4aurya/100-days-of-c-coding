/*
Q99 (Strings): Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

int main() {
    char date[100];
    if (scanf("%99s", date) == 1) {
        int d, m, y;
        if (sscanf(date, "%d/%d/%d", &d, &m, &y) == 3 || sscanf(date, "%d-%d-%d", &d, &m, &y) == 3) {
            const char *months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
            if (m >= 1 && m <= 12) {
                printf("%02d-%s-%04d\n", d, months[m], y);
            }
        }
    }
    return 0;
}
