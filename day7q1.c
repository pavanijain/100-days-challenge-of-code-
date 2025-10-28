//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>

int main (){
    printf("Enter a year: ");
    int a;
    scanf("%d",&a);
    if(a%400==0){
        printf("Leap year\n");
    }else if(a%4==0&&a%100!=0){
        printf("Leap year\n");
    }else {
        printf("Not a leap year\n");
    }
    return 0;
}