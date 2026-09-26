/*Q17: Write a program to find the roots of a quadratic equation and categorize them.


Sample Test Cases:
Input 1:
1 -5 6
Output 1:
Roots are real and distinct.
Root 1 = 3.00
Root 2 = 2.00

Input 2:
1 -4 4
Output 2:
Roots are real and equal.
Root 1 = Root 2 = 2.00

Input 3:
1 2 5
Output 3:
Roots are complex and distinct.
Root 1 = -1.00 + 2.00i
Root 2 = -1.00 - 2.00i

*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and distinct.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
