// https://codeforces.com/problemset/problem/339/A

// https://codeforces.com/problemset/problem/266/A

#include <stdio.h>

// Main driver
int main() {
    char arr[50]; 
    int n, i, j;
    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter the string: ");
    for(i = 0; i < n; i++) {
        printf("Enter the data: ");
        scanf("%s", &arr[i]);
    }
    printf("The array is: ");           
    for(i = 0; i < n; i++) {
        printf("%s", arr);       
    }
    for(i = 0; i < n; i = i + 2) {
        for(j = i + 2; j < n; j = j + 2) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i = 0; i < n; i++) {
        printf("%s", arr);       
    }

    return 0;
}
