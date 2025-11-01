//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main() {
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a, &b);
    printf("sum=%d,difference=%d,product=%d,quotient=%d",a+b,a-b,a*b,a/b);
    return 0;
}
