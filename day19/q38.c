//Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>
int main()
{
    int n, remainder;
    int sum = 0;
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    n = abs(n);
    while (n > 0) {
        remainder = n % 10; 
        sum += remainder; 
        n /= 10;          
    }
    
    printf("%d\n", sum);
    
    return 0;
}
