// https://codeforces.com/problemset/problem/617/A

#include <iostream>
using namespace std;

int main() {
    int f_loc;      // f_loc is the elephant's friend location
    int steps = 0;  // minimum number of steps needed to go to friend's house
    cout << "Enter the position of elephant's friend: ";
    cin >> f_loc;
    if(f_loc <= 0) {
        cout << "Position location selected is wrong.\n";
    }
    else {
        if(f_loc == 1 || f_loc == 2 || f_loc == 3 || f_loc == 4 || f_loc == 5) {
            steps = 1;
            cout << "Minimum steps needed are: " << steps << endl;
        }
        else {
            if(f_loc % 5 == 0) {
                steps = f_loc / 5;
                cout << "Minimum steps needed are: " << steps << endl;
            }
            else {
                int temp = f_loc % 5;
                if(temp == 1 || temp == 2 || temp == 3 || temp == 4) {
                    steps = 1;
                }
                f_loc = f_loc - temp;
                steps = steps + (f_loc / 5);
                cout << "Minimum steps needed are: " << steps << endl;
            }
        }
    }
    system("Pause");
    return 0;
}
