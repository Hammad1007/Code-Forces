// https://codeforces.com/problemset/problem/467/A

#include <stdio.h>

int n;      // global variable for number of rooms

// Input function
void Input(int arr[][2], int n) {
    for(int i = 0; i < n; i++) {
        printf("Enter the data in row: %d\n", i);
        for(int j = 0; j < 2; j++) {
            printf("Enter the data at index: %d ", j);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Display function
void Display(int arr[][2], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");           //cout << endl;
    }
}

// Main driver
int main() {
    printf("Enter the number of rooms: ");
    scanf("%d", &n);
    int arr[n][2], count = 0;
    Input(arr, n);
    Display(arr, n);
    for(int i = 0; i < n; i++) {
        if(arr[i][1] - arr[i][0] >= 2) {
            count++;
        }
    }
    // int count = Function(arr, n);
    printf("The count of rooms where Alex and George can move in is: %d", count);
    return 0;
}
