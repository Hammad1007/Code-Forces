// https://codeforces.com/problemset/problem/59/A

#include <iostream>
#include <cmath>
using namespace std;

// length of the array
int length(char arr[100]) {
    int len = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        len++;
    }
    return len;
}

// To convert into upper
void isupper(char arr[100]) {
    for(int i = 0; i < length(arr); i++) {
        if(arr[i] >= 97 && arr[i] <= 122) {
            arr[i] = arr[i] - 32;
        }
    }
}

// To convert into lower
void islower(char arr[100]) {
    for(int i = 0; i < length(arr); i++) {
        if(arr[i] >= 65 && arr[i] <= 90) {
            arr[i] = arr[i] + 32;
        }
    }
}


// Main driver
int main() {
    char arr[100];
    int cu = 0, cl = 0;     // cu = count of upper, cl = count of lower
    cout << "Enter the array: ";
    cin >> arr;
    cout << "The word entered is: " << arr << endl;
    for(int i = 0; i < length(arr); i++) {
        if(arr[i] >= 65 && arr[i] <= 90) {
            cu++;       // count of upper if there is an upper letter
        }
        else if(arr[i] >= 97 && arr[i] <= 122) {
            cl++;       // count of lower if there is lower letter
        }
    }
    if(cu == cl || cl > cu) {
        islower(arr);
    }
    else if(cu > cl) {
        isupper(arr);
    }
    for(int i = 0; i < length(arr); i++) {
        cout << arr[i];         // display the array
    }
    cout << endl;

    return 0;
}
