// https://codeforces.com/problemset/problem/791/A

#include <iostream>
using namespace std;

// Main driver
int main() {
    int a, b, count = 1;      // a is Limak's weight and b is Bob's weight
    cout << "Enter Limak's weight: ";
    cin >> a;
    cout << "Enter Bob's weight: ";
    cin >> b;
    if((a >= 1 && a <= 10) && (b >= 1 && b <= 10)) {
        if(a <= b) {
            if(a == b) {
                count = 1;
            }
            else {
                while(a <= b) {
                    a = a * 3;
                    b = b * 2;
                    if(a <= b) {
                        count++;
                    }
                }
                
            }
        }
        cout << "The count is: " << count << endl;
    }
    else {
        cout << "Invalid input.\n";
    }
    
    return 0;
}
