
/*Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>
int main() {
    char s[100];
    int i;
    scanf("%s", s);
    for(i=0;s[i];i++) {
        if(s[i]>='a' && s[i]<='z')
            s[i] = s[i] - 32;
        else if(s[i]>='A' && s[i]<='Z')
            s[i] = s[i] + 32;
    }
    printf("%s", s);
}
