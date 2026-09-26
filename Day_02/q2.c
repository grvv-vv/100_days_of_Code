/*Q4: Write a program to calculate the area and circumference of a circle given its radius.


Sample Test Cases:
Input 1:
7
Output 1:
Area = 153.94
Circumference = 43.98

Input 2:
5
Output 2:
Area = 78.54
Circumference = 31.42

*/

#include <stdio.h>

#define PI 3.14159

int main() {
    float radius;
    float area, circumference;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
