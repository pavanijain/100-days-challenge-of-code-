//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>

int main () {
    int P,r,t;
    printf("Enter principal balance, rate and time: ");
    scanf("%d%d%d",&P,&r,&t);
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n",P*r*t*0.01,P*pow((1+r*0.01),t)-P);
    return 0;
}