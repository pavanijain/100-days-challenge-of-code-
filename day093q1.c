//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[3], topper;
    int i, max;

    // Input 3 students
    for (i = 0; i < 3; i++) {
        printf("Enter name, roll number, marks for student %d: ", i+1);
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    // Find topper
    max = 0;
    topper = s[0];
    for (i = 1; i < 3; i++) {
        if (s[i].marks > topper.marks)
            topper = s[i];
    }

    printf("Topper: %s (Marks: %d)\n", topper.name, topper.marks);

    return 0;
}
