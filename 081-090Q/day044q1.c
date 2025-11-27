/*Q87: Count spaces, digits, and special characters in a string.


Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include <stdio.h>
int main() {
    char s[100];
    int i, sp=0, d=0, sc=0;
    fgets(s, sizeof(s), stdin);
    for(i=0;s[i];i++) {
        if(s[i]==' ') sp++;
        else if(s[i]>='0' && s[i]<='9') d++;
        else if((s[i]<'a'||s[i]>'z') && (s[i]<'A'||s[i]>'Z') && s[i]!='\n')
            sc++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d", sp, d, sc);
}
