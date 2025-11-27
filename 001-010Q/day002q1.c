//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>

int main() {
    int a,b;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d%d",&a,&b);
    printf("Area=%d, Perimeter=%d\n",a*b,2*(a+b));
    return 0;
}