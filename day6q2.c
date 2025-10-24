//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>

int main() {
    printf("Enter an integer: ");
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("Positive\n");
    }else if(a<0){
        printf("Negative\n");
    }else{
        printf("Zero\n");
    }
    return 0;
}