// https://codeforces.com/problemset/problem/977/A

#include <stdio.h>

// Main driver
int main() {
    int n, k;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the number of operations you want to perform: ");
    scanf("%d", &k);
    while(k > 0) {
        if(n % 10 != 0) {
            n = n - 1;
        }
        else if(n % 10 == 0) {
            n = n / 10;
        }
        k--;
    }
    printf("The number is: %d", n);
    return 0;
}
