//Q40: Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>

int main (){
    char a;
    
    while((a = getchar()) != '\n'){
        (a=='1')?printf("0"):printf("1");
    }

    printf("\n");
    return 0;
} 
