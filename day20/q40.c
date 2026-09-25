//Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    char binary[100];
    int i = 0;
    if (scanf("%99s", binary) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    while (binary[i] != '\0') {
        if (binary[i] == '1') {
            binary[i] = '0';
        } else if (binary[i] == '0') {
            binary[i] = '1';
        } else {
            printf("Error: Not a valid binary number.\n");
            return 1;
        }
        i++;
    }
    printf("%s\n", binary);
    
    return 0;
}
