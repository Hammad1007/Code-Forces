// https://codeforces.com/problemset/problem/996/A

#include <iostream>
#include <climits>
using namespace std;

int Minimum(int arr[6]) {
    int min = arr[0];
    for(int i = 1; i < 6; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Main driver
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The number is: " << n << endl;
    int arr[6] = {1, 5, 10, 20, 50, 100};
    int diffarr[6], count = 0;
    while(n != 1 || n != 5 || n != 10 || n != 20 || n != 50 || n != 100 ) {
        if(n == 1 || n == 5 || n == 10 || n == 20 || n == 50 || n == 100) {
            count = count + 1;
        }
        else {
            for(int i = 0; i < 6; i++) {
                diffarr[i] = n - arr[i];
                if(diffarr[i] < 0) {
                    diffarr[i] = INT_MAX;
                }
            }
            cout << "The difference array is: ";
            for(int i = 0; i < 6; i++) {
                cout << diffarr[i] << " ";
            }
            cout << "\n";
            int temp = n - Minimum(arr);
            int flag = n / temp;
            count = count + flag;
            n = n - flag * (n - Minimum(arr));
        }
    }
    cout << "The minimum of denominations are: " << count << endl;
    return 0;
}
