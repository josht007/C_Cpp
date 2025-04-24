#include <stdio.h>

int main() {
    double income, federal_tax_rate = 0.15, ontario_tax_rate = 0.0505;
    double federal_tax, ontario_tax, total_tax;

    printf("Enter your annual income: $");
    scanf("%lf", &income);

    federal_tax = income * federal_tax_rate;
    ontario_tax = income * ontario_tax_rate;
    total_tax = federal_tax + ontario_tax;

    printf("Federal Tax: $%.2f\n", federal_tax);
    printf("Ontario Tax: $%.2f\n", ontario_tax);
    printf("Total Tax: $%.2f\n", total_tax);

    return 0;
}
