//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int len, i;
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';

    char *word_start = str;
    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(word_start, &str[i - 1]);
            word_start = &str[i + 1];
        }
    }

    printf("%s", str);
    return 0;
}
