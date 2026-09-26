/*Q33: Write a program to check if a number is an Armstrong number.


Sample Test Cases:
Input 1:
153
Output 1:
Armstrong Number

Input 2:
370
Output 2:
Armstrong Number

Input 3:
123
Output 3:
Not an Armstrong Number

*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, temp, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    if ((int)round(result) == original) {
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }

    return 0;
}
