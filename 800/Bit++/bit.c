// https://codeforces.com/problemset/problem/282/A

#include <stdio.h>

int main() {
    int n, x = 0;      // number of statements
    printf("Enter the number of statements: ");
    scanf("%d", &n);
    char *arr[n];
    int i;
    printf("Enter the number of operations: ");
    for(i = 0; i < n; i++) {
        printf("Operation: ");
        scanf("%s", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        printf("%s", arr[i]);
    }
    printf("\n");               //cout << endl;
    for(i = 0; i < n; i++) {
        if(*arr[i] == '+') {
            x++;
        }
        else if(*arr[i] == '-') {
            x--;
        }
    }
    printf("Value of x: %d", x);
    return 0;
}
