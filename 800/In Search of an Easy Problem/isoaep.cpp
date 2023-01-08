// https://codeforces.com/problemset/problem/1030/A

#include <iostream>
using namespace std;

int n;              // number of users

// Function
void Check(bool arr[100]) {
    int flag;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 1) {
            flag = 1;
        }
        else {
            flag = 0;
        }
    }
    if(flag == 1) {
        cout << "HARD.\n";
    }
    else {
        cout << "EASY.\n";
    }
}

// Main 
int main() {
    cout << "Enter the size: ";
    cin >> n;
    if(n <= 0) {
        cout << "Inavlid.\n";
        return 0;
    }
    bool arr[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter the data at " << i << ": ";
        cin >> arr[i];
    }
    cout << "The array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    Check(arr);

} // end of program


