//Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main () {
    printf("Enter value of a and b: ");
    int a,b;
    scanf("%d%d",&a,&b);
    int c;
    c=a;
    a=b;
    b=c;

    printf("After swap: %i %i\n",a,b);
    return 0;
}