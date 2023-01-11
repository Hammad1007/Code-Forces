// https://codeforces.com/problemset/problem/467/A

#include <iostream>
using namespace std;

int n;      // global variable for number of rooms

// Input function
void Input(int arr[][2], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Enter the data in row: " << i << ".\n";
        for(int j = 0; j < 2; j++) {
            cout << "Enter the data at index: " << j << ": ";
            cin >> arr[i][j];
        }
    }
}

// Display function
void Display(int arr[][2], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Main driver
int main() {
    cout << "Enter the number of rooms: ";
    cin >> n;
    int arr[n][2], count = 0;
    cout << "Take input in the array.\n";
    Input(arr, n);
    cout << "Display the array on screen.\n";
    Display(arr, n);
    for(int i = 0; i < n; i++) {
        if(arr[i][1] - arr[i][0] >= 2) {
            count++;
        }
    }
    // int count = Function(arr, n);
    cout << "The count of rooms where Alex and George can move in is: " << count << endl;
    return 0;
}
