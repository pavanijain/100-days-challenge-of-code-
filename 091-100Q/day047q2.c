
/*Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>
int main() {
    char s[200], word[50], longest[50]="";
    int i=0, j=0;
    fgets(s, sizeof(s), stdin);
    for(i=0; s[i]; i++) {
        if(s[i]!=' ' && s[i]!='\n')
            word[j++] = s[i];
        else {
            word[j] = '\0';
            if(strlen(word) > strlen(longest))
                strcpy(longest, word);
            j = 0;
        }
    }
    printf("%s", longest);
}
