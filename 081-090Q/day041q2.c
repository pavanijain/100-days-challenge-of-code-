/*Q82: Print each character of a string on a new line.


Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>
int main() {
    char s[100];
    scanf("%s", s);
    for(int i=0; s[i]; i++)
        printf("%c\n", s[i]);
}
