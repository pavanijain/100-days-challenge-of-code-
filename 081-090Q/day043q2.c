
/*Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i, n, flag=1;
    scanf("%s", s);
    n = strlen(s);
    for(i=0;i<n/2;i++)
        if(s[i] != s[n-i-1])
            flag = 0;
    printf(flag ? "Palindrome" : "Not palindrome");
}
