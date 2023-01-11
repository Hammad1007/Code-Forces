// https://codeforces.com/problemset/problem/339/A

#include <stdio.h>

// Main driver
int main() {
    char arr[50]; 
    int n, i, j;
    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter the string:\n ");
    for(i = 0; i < n; i++) {
        printf("Enter the data: ");
        scanf("%s", &arr[i]);
    }
    printf("\n");
    printf("The array is: ");           
    for(i = 0; i < n; i++) {
        printf("%s", arr);       
    }
    for(i = 0; i < n; i = i + 2) {
        for(j = i + 2; j < n; j = j + 2) {
            if(arr[i] > arr[j]) {       // swapping here if arr[i] > arr[i + 1]
                int temp = arr[i];      // use temp to swap
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n");
    printf("The array is: ");
    for(i = 0; i < n; i++) {
        printf("%s", arr);       
        printf("\n");
    }
    

    return 0;
}
