//Q2: Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>

int main (){
    printf("Enter the cost price and selling price: ");
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    int a = (sp-cp)*100/cp;

    (a==0)?printf("No Profit No Loss\n"):(a<0)?printf("Loss %i%%\n",-1*a):printf("Profit %i%%\n",a);
    return 0;
}