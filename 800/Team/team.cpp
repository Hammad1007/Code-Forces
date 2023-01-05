// https://codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;

int main() {
    int n;      // n is the number of problem given
    int attempt = 0;    // number of questions to attempt
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n][3];      // 2d array to store the line number and array
    if(n < 1 || n > 1000) {
        cout << "Invalid number of problems given.\n";
        return 0;
    }
    else {
        // Take input in 1 and 0 form
        for(int i = 0; i < n; i++) {
            cout << "Enter the array at: " << i << ": \n";
            for(int j = 0; j < 3; j++) {
                cout << "Enter the data at: " << j << ": ";
                cin >> arr[i][j];       // Input
            }
        }
        cout << "The arrays are as follows: " << endl;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 3; j++) {
                cout << arr[i][j] << " ";       // Display
            }
            cout << endl;
        }
        for(int i = 0; i < n; i++) {
            int c1 = 0;
            for(int j = 0; j < 3; j++) {
                if(arr[i][j] == 1) {
                    c1++;
                }
            }
            if(c1 >= 2) {
                attempt++;
            }
        }
        cout << "The questions to attempt is: " << attempt << "\n";
    }

    system("Pause");
    return 0;
}
