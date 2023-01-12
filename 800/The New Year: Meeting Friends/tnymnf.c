// https://codeforces.com/problemset/problem/723/A

#include <stdio.h>

// Main driver
int main() {
    int x1, x2, x3;
    printf("Enter the position of first friend: ");
    scanf("%d", &x1);
    printf("Enter the position of second friend: ");
    scanf("%d", &x2);
    printf("Enter the position of third friend: ");
    scanf("%d", &x3);
    int ans = 0;
    ans = x1 + x2 + x3;
    ans = (ans / 3);       // consider that the point is always an integer value
    printf("The distance is: %d", ans);
    return 0;
}
