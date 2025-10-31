//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include<stdio.h>

int main (){
    int a;
    scanf("%i",&a);
    int b = 0;
    int i = 1;
    while(a!=0){
        b += (a%2)*i;
        a = a/2;
        i *= 10;
    }
    /* ALTERNATIVE:
    for(int e=a;e!=0;e/=2){
        b += (e%2)*i;
        i *= 10;
    } */
    printf("%i\n",b);
    return 0;
}