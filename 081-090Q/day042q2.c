/*Q84: Convert a lowercase string to uppercase without using built-in functions.


Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>
int main() {
    char s[100];
    int i;
    scanf("%s", s);
    for(i=0;s[i];i++) {
        if(s[i]>='a' && s[i]<='z')
            s[i] = s[i] - 32;
    }
    printf("%s", s);
}
