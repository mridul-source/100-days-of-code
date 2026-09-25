/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/

#include <stdio.h>

float calculateElectricityBill(float units) {
    float bill = 0.0;
    
    if (units <= 100) {
        bill = units * 5.0;
    } else if (units <= 200) {
        bill = (100 * 5.0) + ((units - 100) * 7.0);
    } else if (units <= 300) {
        bill = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
    } else {
       bill = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + ((units - 300) * 12.0);
    }
    
    return bill;
}

int main() {
    float units_consumed, total_bill;
    
    printf("Enter the number of units consumed: ");
    if (scanf("%f", &units_consumed) != 1) {
        printf("Please enter a valid numeric value.\n");
        return 1;
    }
    
    if (units_consumed < 0) {
        printf("Units consumed cannot be negative.\n");
    } else {
        total_bill = calculateElectricityBill(units_consumed);
        printf("Bill: ₹%.2f\n", total_bill);
    }
    
    return 0;
}
