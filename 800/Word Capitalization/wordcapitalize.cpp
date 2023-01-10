// https://codeforces.com/problemset/problem/281/A

#include <iostream>
using namespace std;

// Input
void Input(char arr[1000], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Enter the character at " << i << " index: ";
        cin >> arr[i];
    }
    cout << endl;
}

// Display function
void Display(char arr[1000], int n) {
    cout << "The array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;
}

// Capitalize the first word
void Capitalize(char arr[1000]) {
    if(arr[0] >= 97 && arr[0] <= 122) {
        arr[0] = arr[0] - 32;
    }   
    cout << endl;
}

// Main is here
int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    if(n <= 0 || n > 1000) {
        return 0;
    }
    char arr[1000];
    cout << "Enter the array.\n";
    Input(arr, n);
    cout << "Word before capitalization is: ";
    Display(arr, n);
    Capitalize(arr);
    cout << "Word after capitalization is: ";
    Display(arr, n);
    return 0;
}
