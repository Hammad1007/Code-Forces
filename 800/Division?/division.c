// https://codeforces.com/problemset/problem/1669/A

#include <stdio.h>
int main() {
    int n;      // number of test cases
    printf("Enter the number of test cases: ");
    scanf("%d", &n);
    int r;       // h = hours, m = minutes, rm = remaining minutes
    while(n > 0) {
        printf("Rating: ");
        scanf("%d", &r);
        if(r >= 1900 && r <= 5000) {
            printf("Division 1");
        }
        else if(r >= 1600 && r < 1900) {
            printf("Division 2");
        }
        else if(r >= 1400 && r < 1600) {
            printf("Division 3");
        }
        else if(r <= 1300 && r >= -5000) {
            printf("Division 4");
        } 
        printf("\n");
        n--;
    }
    return 0;
}
