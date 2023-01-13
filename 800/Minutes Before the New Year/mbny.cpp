// https://codeforces.com/problemset/problem/1283/A
// Question

#include <iostream>
using namespace std;

int main() {
    int n;      // number of test cases
    cout << "Enter the number of test cases: ";
    cin >> n;
    int h, m, rm = 0;       // h = hours, m = minutes, rm = remaining minutes
    while(n > 0) {
        cout << "Enter the hours: ";        // enter the hours
        cin >> h;
        cout << "Enter the minutes: ";      // enter the minutes
        cin >> m;
        if((h < 0 || h >= 24) && (m < 0 || m >= 60)) {
            cout << "Invalid input.\n";
        }
        else {
            //int totalmin = 24 * 60;
            m = (h * 60) + m;
            rm = 1440 - m;
            cout << "The remaining minutes are: " << rm << endl;
        }
        n--;
    }
    return 0;
}
