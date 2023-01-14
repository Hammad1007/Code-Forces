// https://codeforces.com/problemset/problem/707/A

#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter the rows: ";
    cin >> r;
    cout << "Enter the columns: ";
    cin >> c;
    char arr[r][c];
    int cc = 0, cb = 0;
    for(int i = 0; i < r; i++) {
        cout << "Enter the data in row: " << i << ".\n";
        for(int j = 0; j < c; j++) {
            cout << "Enter the data at index " << j << ": ";
            cin >> arr[i][j];
        }
    }
    cout << "\n";
    cout << "The array is:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";       //"Enter the data at index " << j << ": ";
        }
        cout << endl;
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(arr[i][j] == 'C' || arr[i][j] == 'K' || arr[i][j] == 'Y') {
                cc++;
            }
            else if(arr[i][j] == 'B' || arr[i][j] == 'G' || arr[i][j] == 'W') {
                cb++;
            }
        }
    }
    if(cb > cc && cc == 0) {
        cout << "#BlackandWhite.\n";
    }
    if(cb < cc && cb == 0) {
        cout << "#Color.\n";
    }
    if(cc < cb && cc != 0) {
        cout << "#Color.\n";
    }

    return 0;
}
