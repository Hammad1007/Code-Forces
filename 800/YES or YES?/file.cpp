// https://codeforces.com/problemset/problem/1703/A

#include <iostream>
#include <cmath>
using namespace std;

// Global Variables
int n;  // number of test cases

// Function to find the length of the string
int len(char l[3]) {
    int len = 0;
    for(int i = 0; l[i] != '\0'; i++) {
        len++;
    }
    return len;
}

// Take the input in the array
void Input(char arr[3]) {
    cout << "Enter the array: ";
    cin >> arr;
}

// Display the array on screen
void Display(char arr[3]) {
    cout << "The array is: " << arr << endl;
}

// Check the length of the array
void checkLength(char arr[3]) {
    if(len(arr) == 3) {
        cout << "Valid.\n";
    }
    else {
        cout << "Invalid.\n";
    }
}

// Compare the arrays
void Compare(char arr[3]) {
    if((arr[0] == 'y' || arr[0] == 'Y') && (arr[1] == 'e' || arr[1] == 'E') && (arr[2] == 's' || arr[2] == 'S')) {
        cout << "Yes.\n";
    }
    else {
        cout << "No.\n";
    }
}

// Main
int main() {
    
    cout << "Enter the number of test cases you want: ";
    cin >> n;
    cout << "Entered number of desired test cases is: " << n << endl;
    char s[3];
    if(n < 1 || n > 1000) {
        cout << "Invalid test cases.\n";
        return 0;
    }
    else {
        for(int i = 0; i < n; i++) {
            Input(s);
            Display(s);
            checkLength(s);
            Compare(s);
        }
    }
    return 0;
}
