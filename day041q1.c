
/*Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>
int main() {
    char s[100];
    int i, count=0;
    fgets(s, sizeof(s), stdin);
    for(i=0; s[i]!='\0'; i++)
        count++;
    printf("%d", count-1); // to remove '\n' from fgets
}
