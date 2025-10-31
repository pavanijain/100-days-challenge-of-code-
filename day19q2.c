//Q38: Write a program to find the sum of digits of a number.

#include<stdio.h>

int main (){
    int a;
    scanf("%d",&a);

    int b = 0;
    while(a!=0){
        b += a%10;
        a /= 10;
    }
    printf("%d\n",b);
    return 0;
}