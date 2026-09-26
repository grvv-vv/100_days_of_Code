/*Q39: Write a program to find the product of odd digits of a number.


Sample Test Cases:
Input 1:
12345
Output 1:
Product of odd digits = 15

Input 2:
2468
Output 2:
No odd digits found (Product = 0)

Input 3:
135
Output 3:
Product of odd digits = 15

*/

#include <stdio.h>

int main() {
    int num, temp, remainder;
    long long product = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = (num < 0) ? -num : num;

    while (temp != 0) {
        remainder = temp % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            hasOdd = 1;
        }
        temp /= 10;
    }

    if (hasOdd) {
        printf("Product of odd digits = %lld\n", product);
    } else {
        printf("No odd digits found (Product = 0)\n");
    }

    return 0;
}
