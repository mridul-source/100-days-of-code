//Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {
    int n, remainder;
    int product = 1; 
  
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    n = abs(n);
    while (n > 0) {
        remainder = n % 10; 
        if (remainder % 2 != 0) {
            product *= remainder; 
        }
        
        n /= 10; 
    }
    
    printf("%d\n", product);
    
    return 0;
}
