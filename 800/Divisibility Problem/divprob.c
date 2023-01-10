// 

#include <stdio.h>

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
    int a, b, res;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while(n > 0) {
        printf("Enter the value of a: ");
        scanf("%d", &a);
        printf("Enter the value of b: ");
        scanf("%d", &b);
        res = Divisibleby(a, b);
        printf("Result: %d", res);
        printf("\n");
        n--;
    }
    return 0;
}
