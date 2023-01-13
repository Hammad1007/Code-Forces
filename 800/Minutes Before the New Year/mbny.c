// https://codeforces.com/problemset/problem/1283/A
// Question
#include <stdio.h>
int main() {
    int n;      // number of test cases
    printf("Enter the number of test cases: ");
    scanf("%d", &n);
    int h, m, rm = 0;       // h = hours, m = minutes, rm = remaining minutes
    while(n > 0) {
        printf("Hours: ");
        scanf("%d", &h);
        printf("Minutes: ");
        scanf("%d", &m);
        m = (h * 60) + m;
        rm = 1440 - m;
        printf("The remaining minutes are: %d", rm);
        printf("\n");
        n--;
    }
    return 0;
}
