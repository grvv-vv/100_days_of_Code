/*Q64: Find the digit that occurs the most times in an integer number.


Sample Test Cases:
Input 1:
1223334
Output 1:
Most frequent digit: 3 (occurred 3 times)

Input 2:
112233
Output 2:
Most frequent digit: 1 (occurred 2 times)

*/

#include <stdio.h>

int main() {
    long long num, temp;
    int freq[10] = {0};

    printf("Enter an integer: ");
    scanf("%lld", &num);

    temp = (num < 0) ? -num : num;

    if (temp == 0) {
        freq[0] = 1;
    } else {
        while (temp > 0) {
            int digit = temp % 10;
            freq[digit]++;
            temp /= 10;
        }
    }

    int maxDigit = 0;
    int maxCount = freq[0];

    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxDigit = i;
        }
    }

    printf("Most frequent digit: %d (occurred %d times)\n", maxDigit, maxCount);

    return 0;
}
