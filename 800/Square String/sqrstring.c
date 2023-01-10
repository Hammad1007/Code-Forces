#include <stdio.h>
#include <string.h>

// Length
int Length(char arr[100]) {
    int len = 0, i = 0;
    while(arr[i] != '\0') {
        len++;
    }
    return len;
}

// Main
int main() {
    int n;
    char *s[100];
    int flag;
    printf("Enter the number of test cases: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Enter the string: ");
        scanf("%s", &s);
        if(Length(s) % 2 != 0) {
            flag = 0;
        }
        else {
            for(int i = 0; i < Length(s); i++) {
                if(s[i] == s[(i + Length(s) / 2)]) {
                    flag = 1;
                }
                else {
                    flag = 1;
                }
            }
        }
        if(flag = 1) {
            printf("YES.\n");
        }
        else {
            printf("NO.\n");
        }
    }
    return 0;
}
