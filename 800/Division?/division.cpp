// https://codeforces.com/problemset/problem/1669/A

#include <iostream>
using namespace std;
int main() {
    int n;      // number of test cases
    cout << "Enter the number of test cases: ";
    cin >> n;
    int r;       // h = hours, m = minutes, rm = remaining minutes
    while(n > 0) {
        cout << "Rating: ";
        cin >> r
        if(r >= 1900 && r <= 5000) {
            cout << ("Division 1") << endl;
        }
        else if(r >= 1600 && r < 1900) {
            cout << ("Division 2") << endl;
        }
        else if(r >= 1400 && r < 1600) {
            cout << ("Division 3") << endl;
        }
        else if(r <= 1300 && r >= -5000) {
            cout << ("Division 4") << endl;
        } 
        n--;
    }
    return 0;
}
