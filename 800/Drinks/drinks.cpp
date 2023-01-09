// https://codeforces.com/problemset/problem/200/B

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the drinks: ";
    cin >> n;
    int arr[100];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cout << "Enter the volume: ";
        cin >> arr[i];
    }
    cout << "The array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    int temp_n = n * 100;
    int ans = sum % temp_n;
    float ans1 = ans / n;
    //cout << (ans % n) * 10 << endl;
    cout << "Percentage: " << ans1;
    return 0;
}
