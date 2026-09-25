//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    int side1, side2, side3;

    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    } 
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Isosceles\n");
    } 
    else {
        printf("Scalene\n");
    }

    return 0;
}
