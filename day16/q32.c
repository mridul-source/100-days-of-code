//Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int n, original_num, remainder;
    int reversed_num = 0;
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    original_num = n;
  
    while (n > 0) {
        remainder = n % 10;
        reversed_num = reversed_num * 10 + remainder;
        n /= 10;
    }
    if (original_num == reversed_num) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    
    return 0;
}
