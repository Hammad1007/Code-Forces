// https://codeforces.com/problemset/problem/1619/A

#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

// Main
int main() {
    int n;
    string s;
    bool flag;
    cout << "Enter the number of test cases: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Enter the string: ";
        cin >> s;
        if(s.length() % 2 != 0) {
            flag = false;
        }
        else {
            for(int i = 0; i < s.length(); i++) {
                if(s[i] == s[(i + s.length() / 2)]) {
                    flag = true;
                }
                else {
                    flag = true;
                }
            }
        }
        if(flag = true) {
            cout << "YES.\n";
        }
        else {
            cout << "NO.\n";
        }
    }
    
    return 0;
}
