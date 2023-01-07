// https://codeforces.com/problemset/problem/71/A

#include <iostream>
using namespace std;

// Check the length of the word
int length(char arr[100]) {
    int l = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        l++;
    }
    return l;
}

// Input
void Input(char arr[100]) {
    cout << "Enter the word: ";
    cin >> arr;
}

// Display
void Display(char arr[100]) {
    cout << "The word is: " << arr << endl;
}

// Encrypting the word
void Convert(char arr[100]) {
    int tempcount = 0;
    if(length(arr) <= 0) {      // if length is less than equal to 0
        cout << "Invalid word.\n";
    }
    else if(length(arr) > 0 && length(arr) <= 10) {     // if length of word is between [1, 10]
        cout << "No need to convert.\n";
    }
    else {
        for(int i = 0; i < length(arr); i++) {
            tempcount = length(arr) - 2;
        }
        cout << arr[0] << tempcount << arr[length(arr) - 1] << "\n";
    }
}

// Main
int main() {
    int n;      // number of words you want to enter
    cout << "Enter the number of words: ";
    cin >> n;
    cout << endl;
    char arr[100];
    for(int i = 0; i < n; i++) {
        cout << "Enter the word: " << i + 1 << endl;
        Input(arr);
        Display(arr);
        Convert(arr);
        cout << "\n";
    }
    return 0;
}
