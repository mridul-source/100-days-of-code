//Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int findHCF(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1, num2;
    
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }
    
    int hcf = findHCF(num1, num2);
    printf("%d\n", hcf);
    
    return 0;
}
