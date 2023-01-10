// https://codeforces.com/problemset/problem/1742/A


#include <stdio.h>

// Main driver
int main() {
    int n, i;
    int arr[3];
    printf("Enter the test cases: ");
    scanf("%d", &n);
    while(n > 0) {
        for(i = 0; i < 3; i++) {
            printf("Enter the data: ");
            scanf("%d", &arr[i]);
        }
        printf("The array is: ");
        for(i = 0; i < 3; i++) {
            printf("%d " " ", arr[i]);
        }
        printf("\n");            //cout << endl;
        if(arr[0] + arr[1] == arr[2] || arr[0] + arr[2] == arr[1] || arr[1] + arr[2] == arr[0]) {
            printf("YES.\n");
        }
        else {
            printf("NO.\n");;
        }

        printf("\n");
        n--;
    }
    return 0;
}
