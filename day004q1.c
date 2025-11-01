//Q7: Write a program to swap two numbers without using a third variable.

#include<stdio.h>

int main (){
    printf("Enter two numbers a and b: ");
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap: %d %d\n",a,b);
}