#include <stdio.h>

// Main driver
int main() {
    int a, b, count = 1;      // a is Limak's weight and b is Bob's weight
    printf("Enter Limak's weight: ");
    scanf("%d", &a);
    printf("Enter Bob's weight: ");
    scanf("%d", &b);
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
        printf("The count is: %d", count);
        printf("\n");
    }
    else {
       printf("Invalid input.\n");
    }
    
    return 0;
}
