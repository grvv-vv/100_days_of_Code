/*Q41: Write a program to swap the first and last digit of a number.


Sample Test Cases:
Input 1:
1234
Output 1:
Swapped Number = 4231

Input 2:
5982
Output 2:
Swapped Number = 2985

Input 3:
7
Output 3:
Swapped Number = 7

*/

#include <stdio.h>

int main() {
    int num, first, last, temp, div = 1, middle, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10 && num > -10) {
        printf("Swapped Number = %d\n", num);
        return 0;
    }

    last = num % 10;

    temp = num;
    while (temp >= 10) {
        temp /= 10;
        div *= 10;
    }
    first = temp;

    middle = (num % div) / 10;

    swapped = (last * div) + (middle * 10) + first;

    printf("Swapped Number = %d\n", swapped);

    return 0;
}
