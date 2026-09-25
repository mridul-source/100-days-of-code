//Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    int has_even = 0;
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product *= i;
            has_even = 1;
        }
    }
    
    if (!has_even) {
        product = 0; 
    }
    
    printf("%lld\n", product);
    
    return 0;
}
