//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // Open file in append mode
    fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    // Take new line from user
    printf("Enter text to append: ");
    getchar();  
    fgets(text, sizeof(text), stdin);

    // Append to file
    fputs(text, fp);

    // Close the file
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
