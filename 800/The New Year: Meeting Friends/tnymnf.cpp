// https://codeforces.com/problemset/problem/723/A

#include <iostream>
#include <cmath>
using namespace std;

// Main driver
int main() {
    int x1, x2, x3;
    cout << "Enter the position of first friend: ";
    cin >> x1;
    cout << "Enter the position of second friend: ";
    cin >> x2;
    cout << "Enter the position of third friend: ";
    cin >> x3;
    float ans = 0;
    ans = x1 + x2 + x3;
    ans = floor(ans / 3);       // consider that the point is always an integer value
    cout << "The minimum distance is: " << ans << endl;
    return 0;
}
