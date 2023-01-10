// https://codeforces.com/problemset/problem/1742/A

#include <iostream>
using namespace std;

// Main driver
int main() {
    int n;
    int arr[3];
    cout << "Enter the test cases: ";
    cin >> n;
    while(n > 0) {
        for(int i = 0; i < 3; i++) {
            cout << "Enter the data at " << i << ": ";
            cin >> arr[i];
        }
        cout << "The array is: ";
        for(int i = 0; i < 3; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        if(arr[0] + arr[1] == arr[2] || arr[0] + arr[2] == arr[1] || arr[1] + arr[2] == arr[0]) {
            cout << "YES.\n";
        }
        else {
            cout << "NO.\n";
        }

        cout << endl;
        n--;
    }
    cout << endl;

    return 0;
}
