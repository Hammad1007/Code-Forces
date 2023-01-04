// https://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;

int main() {
    int w;
    cout << "Enter the weight of the watermelon: ";
    cin >> w;
    if(w < 1 || w > 100) {              // check if the weight is lss than 1 or greater than 100
        cout << "Invalid weight.\n";
    }
    else if(w >= 1 && w <= 100) {       // check for the weight between 1 and 100 inclusive
        if(w % 2 == 0) {                // check if the weight is even number or not
            cout << "YES.";
        }
        else {
            cout << "NO";
        }
    }
    return 0;
}
