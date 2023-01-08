// https://codeforces.com/problemset/problem/1328/A

#include <iostream>
using namespace std;

// Check divisibility
int Divisibleby(int x, int y) {
    int temp = 0;
    if(x % y == 0) {
        temp = 0;
    }
    else {
        temp = x % y;
        temp = y - temp;
    }
    return temp;
}

// Main driver here
int main() {
    int a, b;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    while(n > 0) {
        cout << "Enter a: ";
        cin >> a; 
        cout << "Enter a: ";
        cin >> b;
        cout << Divisibleby(a, b) << endl;
        n--;
    }
    return 0;
}
