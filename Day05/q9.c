/*
Q9 (User Inputs, Operations & Output): Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    double p, r, t;
    if (scanf("%lf %lf %lf", &p, &r, &t) == 3) {
        double si = (p * r * t) / 100.0;
        double ci = p * pow((1.0 + r / 100.0), t) - p;
        
        if (si == (int)si) {
            printf("Simple Interest=%d, ", (int)si);
        } else {
            printf("Simple Interest=%.2f, ", si);
        }
        
        if (ci == (int)ci) {
            printf("Compound Interest=%d\n", (int)ci);
        } else {
            char buf[64];
            snprintf(buf, sizeof(buf), "%.2f", ci);
            int len = strlen(buf);
            if (len > 2 && buf[len - 1] == '0' && buf[len - 2] != '.') {
                buf[len - 1] = '\0';
            }
            printf("Compound Interest=%s\n", buf);
        }
    }
    return 0;
}
