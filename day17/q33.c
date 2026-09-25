//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main() {
    int n, original_num, remainder;
    int sum = 0;
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    original_num = n;
    while (n > 0) {
        remainder = n % 10;
        sum += (remainder * remainder * remainder); 
        n /= 10;
    }
    if (sum == original_num) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    
    return 0;
}
