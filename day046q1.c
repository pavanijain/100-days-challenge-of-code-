/*Q91: Remove all vowels from a string.


Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>
int main() {
    char s[100];
    int i;
    scanf("%s", s);
    for(i=0;s[i];i++) {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&
           s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')
            printf("%c", s[i]);
    }
}
