// https://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;

int main() {
    int w;
    cout << "Enter the weight of the watermelon: ";
    cin >> w;
    if(w < 1 || w > 100 || w % 2 != 0) {              // check if the weight is less than 1 or greater than 100 or not even
        cout << "No.";
    }
    else {
        cout << "Yes.";
    }
    return 0;
}
