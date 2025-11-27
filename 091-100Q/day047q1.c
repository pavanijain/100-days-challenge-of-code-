
/*Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    int i, f1[26]={0}, f2[26]={0}, flag=1;
    scanf("%s %s", s1, s2);
    if(strlen(s1)!=strlen(s2)) { printf("Not anagrams"); return 0; }
    for(i=0;s1[i];i++) {
        f1[s1[i]-'a']++;
        f2[s2[i]-'a']++;
    }
    for(i=0;i<26;i++)
        if(f1[i]!=f2[i]) flag=0;
    printf(flag ? "Anagrams" : "Not anagrams");
}
