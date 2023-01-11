// https://codeforces.com/problemset/problem/266/A
#include <stdio.h>

// Main driver
int main() {
    char arr[50]; 
    int n, count = 0, i, j;
    printf("Enter the number of stones: ");
    scanf("%d", &n);
    printf("Enter the stones.\n");
    for(i = 0; i < n; i++) {
        printf("Enter the color: ");
        scanf("%s", &arr[i]);
    }

    printf("Stones are: ");
    //for(i = 0; i < n; i++) {
    printf("%s", arr);
   // }
    printf("\n");

    for(i = 0, j = i + 1; i < n, j < n; i++, j++) {
        if(arr[i] == arr[j]) {
            count++;
        }
    }
    printf("Count is: %d", count);
    return 0;
}
