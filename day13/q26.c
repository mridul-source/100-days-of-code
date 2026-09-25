//Q26: Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
