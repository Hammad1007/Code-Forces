// https://codeforces.com/problemset/problem/200/B

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the drinks: ");
    scanf("%d", &n);
    int arr[100];
    int sum = 0;
    for(i = 0; i < n; i++) {
        printf("Enter the data: ");
        scanf("%d", &arr[i]);
    }
    printf("Array: ");
    for(i = 0; i < n; i++) {
        printf("%d", arr[i]);
        printf(" ");
    }
    printf("\n");
    for(i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    int temp_n = n * 100;
    float ans = sum % temp_n;
    float ans1 = ans / n;
    printf("Percentage: %f", ans1);
    return 0;
}
