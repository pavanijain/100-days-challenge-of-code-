//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp;
    FILE *fp;

    // Input employee details
    printf("Enter name, ID, salary: ");
    scanf("%s %d %f", emp.name, &emp.id, &emp.salary);

    // Write to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Cannot open file!\n");
        return 1;
    }
    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Cannot open file!\n");
        return 1;
    }
    fread(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    // Display employee data
    printf("\nEmployee Details:\n");
    printf("Name: %s\nID: %d\nSalary: %.2f\n", emp.name, emp.id, emp.salary);

    return 0;
}
