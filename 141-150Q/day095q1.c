//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

// Function to find topper
struct Student findTopper(struct Student s[], int n) {
    struct Student topper = s[0];
    for (int i = 1; i < n; i++) {
        if (s[i].marks > topper.marks)
            topper = s[i];
    }
    return topper;
}

int main() {
    struct Student s[3], top;
    
    // Input 3 students
    for (int i = 0; i < 3; i++) {
        printf("Enter name, roll number, marks for student %d: ", i+1);
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    top = findTopper(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);

    return 0;
}
