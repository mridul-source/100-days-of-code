#include <stdio.h>
int main()
{
int num1, num2;
printf("Enter your 1st number: ");
scanf("%d", &num1);

printf("Enter your 2nd number: ");
scanf("%d", &num2);

printf("\n results \n");

printf("Addition: %d\n", num1 + num2);
printf("Subtraction: %d\n", num1 - num2);
printf("Multiplication: %d\n", num1 * num2);
printf("Division: %d\n", num1 / num2);
printf("Remainder: %d\n", num1 % num2);
return 0;
}
