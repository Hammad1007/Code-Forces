// https://codeforces.com/problemset/problem/977/A

#include <iostream>
using namespace std;

// int n;      // global variable for number of rooms

// Main driver
int main() {
    int n, k;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the number of operations you want to perform: ";
    cin >> k;
    while(k > 0) {
        if(n % 10 != 0) {
            n = n - 1;
        }
        else if(n % 10 == 0) {
            n = n / 10;
        }
        k--;
    }
    cout << "The number is: " << n << endl;


    

    
    return 0;
}
