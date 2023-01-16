// https://codeforces.com/problemset/problem/1676/A

#include <stdio.h>

// Input array
void Input(int arr[6]) {
    for(int i = 0; i < 6; i++) {
        printf("Enter the data: ");
        scanf("%d", &arr[i]);
    }
}

// Display array
void Display(int arr[6]) {
    for(int i = 0; i < 6; i++) {
        printf("%d", arr[i]);
    }
}

int Comparesum(int arr[6]) {
    int ans;
    for(int i = 0; i < 6; i++) {
        if(arr[0] + arr[1] + arr[2] == arr[3] + arr[4] + arr[5]) {
            ans = 1;
        }
        else {
            ans = 0;
        }
    }
    return ans;
}

int main() {
    int n, ans;
    printf("Enter the test cases: ");
    scanf("%d", &n);
    int arr[6];
    while(n > 0) {
        Input(arr);
        Display(arr);
        printf("\n");
        printf("The value of ans is: %d\n", Comparesum(arr));
        if(Comparesum(arr) == 0) {
            printf("No.\n");
        }
        else if(Comparesum(arr) == 1) {
            printf("Yes.\n");
        }
        n--;
    }
    return 0;
}
