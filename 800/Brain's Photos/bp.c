#include <stdio.h>

// https://codeforces.com/problemset/problem/707/A

int main() {
    int r, c;
    printf("Enter the rows: ");
    scanf("%d", &r);
    printf("Enter the cols: ");
    scanf("%d", &c);
    char arr[r][c];
    int cc = 0, cb = 0;
    for(int i = 0; i < r; i++) {
        printf("Enter the data in row: %d", i);
        for(int j = 0; j < c; j++) {
            printf("Enter the data in col: %d", j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("The array is:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%c", arr[i][j]); 
        }
        printf("\n"); //endl;
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(arr[i][j] == 'C' || arr[i][j] == 'K' || arr[i][j] == 'Y') {
                cc++;
            }
            else if(arr[i][j] == 'B' || arr[i][j] == 'G' || arr[i][j] == 'W') {
                cb++;
            }
        }
    }
    if(cb > cc && cc == 0) {
        printf("#BlackandWhite.\n");
    }
    if(cb < cc && cb == 0) {
        printf("#Color.\n");
    }
    if(cc < cb && cc != 0) {
        printf("#Color.\n");
    }

    return 0;
}
