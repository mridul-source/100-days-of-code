//Q34: Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int n, i;
    int is_prime = 1; 
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (n <= 1) {
        is_prime = 0;
    } else 
    {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0; 
                break; 
            }
        }
    }
    if (is_prime == 1) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }
    
    return 0;
}
