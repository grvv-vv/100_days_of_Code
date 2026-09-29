/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
Follow-up(optional): Can you do it in O(log n) Time Complexity?


Sample Test Cases:
Input 1:
6
5 7 7 8 8 10
8
Output 1:
3, 4

Input 2:
6
5 7 7 8 8 10
6
Output 2:
-1, -1

Input 3:
4
2 2 2 2
2
Output 3:
0, 3

*/

#include <stdio.h>

int findFirst(int arr[], int n, int target) {
    int low = 0, high = n - 1, first = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

int findLast(int arr[], int n, int target) {
    int low = 0, high = n - 1, last = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int main() {
    int n, target;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);

    if (first != -1) {
        printf("%d, %d\n", first, last);
    } else {
        printf("-1, -1\n");
    }

    return 0;
}
