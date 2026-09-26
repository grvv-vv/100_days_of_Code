/*Q28: Write a program to print the product of even numbers from 1 to n.


Sample Test Cases:
Input 1:
6
Output 1:
Product = 48

Input 2:
4
Output 2:
Product = 8

*/

#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int found = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        found = 1;
    }

    if (found) {
        printf("Product = %lld\n", product);
    } else {
        printf("Product = 0\n");
    }

    return 0;
}
