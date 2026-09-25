//Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i;
    int current_odd = 1;
    int sum = 0;
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    if (n < 0) {
        printf("Count cannot be negative.\n");
        return 1;
    }
    
    for (i = 0; i < n; i++) {
        sum += current_odd;
        current_odd += 2; 
    }
    
    printf("%d\n", sum);
    
    return 0;
}
