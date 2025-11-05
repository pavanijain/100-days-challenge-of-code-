/*Q83: Count vowels and consonants in a string.


Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int v=0, c=0, i;
    scanf("%s", s);
    for(i=0;s[i];i++) {
        char ch = s[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            v++;
        else if((ch>='a'&&c
