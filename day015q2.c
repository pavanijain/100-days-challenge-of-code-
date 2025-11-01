//Q30: Write a program to reverse a given number.

#include<stdio.h>

int main (){
    int a,reversed = 0;
    scanf("%i",&a);

    while(a!=0){
        reversed = 10*reversed+(a%10);
        a = a/10;
    }

    printf("%i\n",reversed);
    return 0;
}