//Q26: Write a program to print numbers from 1 to n.

#include<stdio.h>

int main (){
    int a;
    scanf("%i",&a);
    for(int i = 1; i<=a; i++){
        printf("%i ",i);
    }
    printf("\n");
    return 0;
}