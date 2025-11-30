//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int roll;
    int marks;
};

int main() {
    struct Student s;           // normal structure variable
    struct Student *ptr;        // pointer to struct

    ptr = &s;   // pointer stores address of structure variable

    // Modify data using -> operator
    strcpy(ptr->name, "John");
    ptr->roll = 106;
    ptr->marks = 91;

    // Print modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
