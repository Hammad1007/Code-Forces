// 

#include <stdio.h>

int main() {
    // Write C code here
    int w;
    printf("Enter the weight of the watermelon: ");
    scanf("%d", &w);
    printf("Weight is: %d", w);
    printf("\n");
    if(w >= 1 && w <= 100) {
        if(w % 2 == 0) {
            printf("YES.\n");
        }
        else {
            printf("NO.\n");
        }
    }
    return 0;
}
