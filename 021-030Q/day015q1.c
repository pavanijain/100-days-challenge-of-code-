//Q29: Write a program to calculate the factorial of a number.

#include<stdio.h>

int main (){
    int a;
    scanf("%i",&a);
    int b=1;
    int i=1;
    while(i<a){
        b *= (i+1);
        i++;
    }
    printf("%i\n",b);
    return 0;
}