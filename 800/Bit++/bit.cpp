// https://codeforces.com/problemset/problem/282/A

#include <iostream>
using namespace std;

int main() {
    int n, x = 0;      // number of statements
    cout << "Enter the number of statements: ";
    cin >> n;
    char arr[n];
    cout << "Enter the operations you want to do.\n";
    for(int i = 0; i < n; i++) {
        cout << "Operation: " << i << ": ";
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++) {
        if(arr[i] == '+') {
            x++;
        }
        else if(arr[i] == '-') {
            x--;
        }
    }
    cout << "Value of x: " << x << endl;
    return 0;
}
