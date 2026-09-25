//Q30: Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int n, reversed_num = 0, remainder;
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    while (n != 0) {
        remainder = n % 10;
        reversed_num = reversed_num * 10 + remainder;
        n /= 10;
    }
    
    printf("%d\n", reversed_num);
    
    return 0;
}
