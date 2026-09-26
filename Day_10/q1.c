/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


Sample Test Cases:
Input 1:
5 5 5
Output 1:
Equilateral Triangle

Input 2:
5 5 8
Output 2:
Isosceles Triangle

Input 3:
3 4 5
Output 3:
Scalene Triangle

*/

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        } else {
            printf("Scalene Triangle\n");
        }
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}
