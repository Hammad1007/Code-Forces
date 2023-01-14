// https://codeforces.com/problemset/problem/734/A

#include <iostream>
using namespace std;

// Function to capitaize the elements
char Capitalize(char c) {
    c = c - 32;
    return c;
}

// Main driver here
int main() {
    int n, countA = 0, countD = 0;      // countA = count of A, countD = count of Danik
    cout << "Enter the size: ";
    cin >> n;
    char arr[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter the data: ";
        cin >> arr[i];
    }
    cout << "The array is: ";
    for(int i = 0; i < n; i++) {
        if(arr[i] == 'a') {
            cout << Capitalize(arr[i]);
            countA++;
        }
        else if(arr[i] == 'd') {
            cout << Capitalize(arr[i]);
            countD++;
        }
    }
    cout << "\n";
    if(countA == countD) {
        cout << "Friendship.\n";
    }
    else if(countA > countD) {
        cout << "Anton.\n";
    }
    else if(countD > countA) {
        cout << "Danik.\n";
    }
    return 0;
}
