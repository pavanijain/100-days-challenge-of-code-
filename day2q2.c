//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
#define Pi 3.14

int main(){
    int a;
    printf("Enter radius of circle: ");
    scanf("%d",&a);
    printf("Area:%.2f, Perimeter=%.2f\n",Pi*a*a,2*Pi*a);
    return 0;
}