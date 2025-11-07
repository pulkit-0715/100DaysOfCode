/*Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1


Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main() {
    printf("Enter size of array\n");
    int n, target;
    scanf("%d", &n);
   
    printf("Enter array elements\n");
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target\n");
    scanf("%d", &target);

    sort(nums, n);

    int left = 0, right = n - 1;
    int found = 0;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            printf("%d %d\n", left, right);
            found = 1;
            break;
        }
        else if (sum < target)
            left++;
        else
            right--;
    }

    if (!found)
        printf("-1 -1\n");

    return 0;
}
