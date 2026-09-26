/*Q22: Write a program to find profit or loss percentage given cost price and selling price.


Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit: 200.00
Profit Percentage: 20.00%

Input 2:
1000 800
Output 2:
Loss: 200.00
Loss Percentage: 20.00%

Input 3:
500 500
Output 3:
No Profit, No Loss

*/

#include <stdio.h>

int main() {
    float cost_price, selling_price;
    float profit, loss, percentage;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cost_price, &selling_price);

    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        percentage = (profit / cost_price) * 100.0;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        percentage = (loss / cost_price) * 100.0;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
