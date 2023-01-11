// https://codeforces.com/problemset/problem/266/A


#include <iostream>
using namespace std;


// Main driver
int main() {
    char arr[50]; 
    int n, count = 0;
    cout << "Enter the number of stones: ";
    cin >> n;
    cout << "Enter the stones.\n";
    for(int i = 0; i < n; i++) {
        cout << "Enter the color at index: " << i << ": ";
        cin >> arr[i];
    }
    cout << "The stones are: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n; i++) {
        if(arr[i] == arr[i + 1]) {
            count++;
        }
    }
    cout << "The count is: " << count << endl;

    return 0;
}
