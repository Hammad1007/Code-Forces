#include <stdio.h>

// Main driver here
int main() {
    int n, countA = 0, countD = 0;      // countA = count of A, countD = count of Danik
    printf("Enter the size: ");
    scanf("%d", &n);
    char arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the data: ");
        scanf("%s", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == 'a') {
            arr[i] = arr[i] - 32; //cout << Capitalize(arr[i]);
            countA++;
        }
        else if(arr[i] == 'd') {
            arr[i] = arr[i] - 32; //cout << Capitalize(arr[i]);
            countD++;
        }
    }
    printf("\n");
    if(countA == countD) {
        printf("Friendship.\n");
    }
    else if(countA > countD) {
        printf("Anton.\n");
    }
    else if(countD > countA) {
        printf("Danik.\n");
    }
    return 0;
}
