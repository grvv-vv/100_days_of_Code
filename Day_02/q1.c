/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


Sample Test Cases:
Input 1:
5 3
Output 1:
Area = 15
Perimeter = 16

Input 2:
10 4
Output 2:
Area = 40
Perimeter = 28

*/

#include <stdio.h>

int main() {
    int length, breadth;
    int area, perimeter;

    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}
