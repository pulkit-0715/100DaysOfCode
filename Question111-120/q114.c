/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3


Subbmition by Pulkit Singh
Btech CS
590022181
Batch - 12
 */
#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    if (n == 0) return 0;

    int seen[128] = {0};
    int left = 0, longest = 0;

    for (int right = 0; right < n; right++) {
        while (seen[(int)s[right]]==1) {
            seen[(int)s[left]] = 0;
            left++;
        }

        seen[(int)s[right]] = 1;
        longest = max(longest, right - left + 1);
    }

    return longest;
}

int main() {
    char s[50001];

    if (scanf("%50000s", s) == 1)
        printf("%d\n", lengthOfLongestSubstring(s));
    else
        printf("0\n");

    return 0;
}
