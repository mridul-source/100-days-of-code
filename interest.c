#include <stdio.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;

    scanf("%lf %lf %lf", &principal, &rate, &time);

    simple_interest = (principal * rate * time) / 100;

    compound_interest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", simple_interest, compound_interest);

    return 0;
}

