/*Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.


Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:    
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
*/
#include <stdio.h>

void firstneg(int arr[], int n, int k) {
    int start = 0, end = 0;
    int queue[n], front = 0, rear = 0;

    while (end < n) {
        if (arr[end] < 0)
            queue[rear++] = end;

        if (end - start + 1 == k) {
            if (front != rear)
                printf("%d ", arr[queue[front]]);
            else
                printf("0 ");

            if (front != rear && queue[front] == start)
                front++;

            start++;
        }
        end++;
    }
}


int main() {
    int n, k;
    printf("Enter array siz\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter value of integer\n");
    scanf("%d", &k);
    firstneg(arr, n, k);
    return 0;
}
