//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/


#include <stdio.h>
#include <string.h>

int main() {
    char name[100][100];
    int n = 0, i;

    // Read full line input
    char str[200];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';

    // Split words
    char *token = strtok(str, " ");
    while (token != NULL) {
        strcpy(name[n++], token);
        token = strtok(NULL, " ");
    }

    // Print initials except last word
    for (i = 0; i < n - 1; i++)
        printf("%c.", name[i][0]);

    // Print last word (surname) in full
    printf(" %s", name[n - 1]);

    return 0;
}

