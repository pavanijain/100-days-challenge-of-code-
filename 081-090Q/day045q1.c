
/*Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>
int main() {
    char s[100], ch;
    int i, count=0;
    scanf("%s", s);
    scanf(" %c", &ch);
    for(i=0;s[i];i++)
        if(s[i]==ch) count++;
    printf("%d", count);
}
