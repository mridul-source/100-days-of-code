//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
        return 1;
    }
    
    for (i = 2; i <= n; i++) {
        factorial *= i;
    }
    
    printf("%d\n", factorial);
    
    return 0;
}
