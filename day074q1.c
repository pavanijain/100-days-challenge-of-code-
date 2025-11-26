//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceName[50], destName[50];
    int ch;

    // Take filenames from user
    printf("Enter source file name: ");
    scanf("%s", sourceName);

    printf("Enter destination file name: ");
    scanf("%s", destName);

    // Open files
    src = fopen(sourceName, "r");
    dest = fopen(destName, "w");

    if (src == NULL) {
        printf("Source file not found!\n");
        return 1;
    }

    if (dest == NULL) {
        printf("Cannot create destination file!\n");
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close files
    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destName);

    return 0;
}
