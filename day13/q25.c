//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    double num1, num2;
    char op;
    
    if (scanf("%lf %lf %c", &num1, &num2, &op) != 3) {
        printf("Invalid input format.\n");
        return 1;
    }
    
    switch (op) {
        case '+':
            printf("%.0f\n", num1 + num2);
            break;
            
        case '-':
            printf("%.0f\n", num1 - num2);
            break;
            
        case '*':
            printf("%.0f\n", num1 * num2);
            break;
            
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%.0f\n", num1 / num2);
            }
            break;
            
        case '%':
            if ((int)num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%d\n", (int)num1 % (int)num2);
            }
            break;
            
        default:
            printf("Error: Invalid operator\n");
            break;
    }
    
    return 0;
}
