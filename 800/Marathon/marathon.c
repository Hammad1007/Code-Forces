// https://codeforces.com/problemset/problem/1692/A

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a, b, c, d, n;
    printf("Enter n: ");
    scanf("%d", &n);
    while(n > 0) {
        printf("Enter a: ");
        scanf("%d", &a);
        printf("Enter b: ");
        scanf("%d", &b);
        printf("Enter c: ");
        scanf("%d", &c);
        printf("Enter d: ");
        scanf("%d", &d);
        if((a < 0 || a > 10000) && (b < 0 || b > 10000) && (c < 0 || c > 10000) && (d < 0 || d > 10000)) {
            printf("The input is incorrect.");
        }
        else {
            if(a > b && a > c && a > d) {
                printf("The number of participants in front of Timur is 0\n");
            }
            else if((a < b && a > c && a > d) || (a > b && a < c && a > d) || (a > b && a > c && a < d)) {
                printf("The number of participants in front of Timur is 1\n");
            }
            else if((a < b && a < c && a > d) || (a < b && a > c && a < d) || (a > b && a < c && a < d)) {
                printf("The number of participants in front of Timur is 2\n");
            }
            else if (a < b && a < c && a < d) {
                printf("The number of participants in front of Timur is 3\n");
            }
            else if (a == b || a == c || a == d) {
                printf("Cannot handle equal values.\n");
            }
            n--;
        }
    }
    //printf("Hello world");

    return 0;
}
