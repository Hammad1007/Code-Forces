// https://codeforces.com/problemset/problem/158/A

#include <iostream>
using namespace std;

// Input
void Input(int arr[50], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Enter the data at: " << i << ": ";
        cin >> arr[i];
    }
}

// Display array
void Display(int arr[50], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// Sorting
void Sort(int arr[50], int n) {
    int temp;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Main driver starts here
int main() {
    int n, k, arr[50];
    cout << "Enter the number of values you want in the array: ";
    cin >> n;
    cout << "Enter the index value you want to compare with: ";
    cin >> k;
    cout << n << ", " << k << endl; 
    Input(arr, n);
    cout << "The array is: ";
    Display(arr, n);
    cout << endl;
    Sort(arr, n);
    cout << "The sorted array is: ";
    Display(arr, n);       // display the array which is sorted now

    // selecting the numbers for next round
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= arr[k]) {
            count++;
        }
    }
    cout << "Next round participants are: " << count << endl;
    return 0;
}

