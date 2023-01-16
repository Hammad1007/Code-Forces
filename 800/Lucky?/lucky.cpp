// https://codeforces.com/problemset/problem/1676/A

#include <iostream>
using namespace std;

// Input array
void Input(int arr[6]) {
    for(int i = 0; i < 6; i++) {
        cout << "Enter the data: ";
        cin >> arr[i];
    }
}

// Display array
void Display(int arr[6]) {
    for(int i = 0; i < 6; i++) {
        cout << arr[i];
    }
}

int Comparesum(int arr[6]) {
    int ans;
    for(int i = 0; i < 6; i++) {
        if(arr[0] + arr[1] + arr[2] == arr[3] + arr[4] + arr[5]) {
            ans = 1;
        }
        else {
            ans = 0;
        }
    }
    return ans;
}

int main() {
    int n, ans;
    cout << "Enter the test cases: ";
    cin >> n;
    int arr[6];
    while(n > 0) {
        Input(arr);
        Display(arr);
        cout << "\n";
        cout << "The value of ans is: " << Comparesum(arr) << "\n";
        if(Comparesum(arr) == 0) {
            cout << "No.\n";
        }
        else if(Comparesum(arr) == 1) {
            cout << "Yes.\n";
        }
        n--;
    }
    return 0;
}
