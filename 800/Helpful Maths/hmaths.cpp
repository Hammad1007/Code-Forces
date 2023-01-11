// https://codeforces.com/problemset/problem/266/A


#include <iostream>
using namespace std;

// Main driver
int main() {
    char arr[50]; 
    int n;
    cout << "Enter the size: ";
    cin >> n;

    cout << "Enter the string: ";
    for(int i = 0; i < n; i++) {
        cout << "Enter the data at index " << i << ": ";
        cin >> arr[i];
    }
    cout << "The array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }
    // cout << "The length: " << n << endl;
    for(int i = 0; i < n; i = i + 2) {
        for(int j = i + 2; j < n; j = j + 2) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "The array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }

    return 0;
}
