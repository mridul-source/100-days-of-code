//Q35: Write a program to print all factors of a given number.

#include <stdio.h>

int main() {
    int n, i;
    int first = 1; 
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
      
            if (!first) {
                printf(" ");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");
    
    return 0;
}
