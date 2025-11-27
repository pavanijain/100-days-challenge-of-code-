//Q35: Write a program to print all factors of a given number.

#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    
    for(int i = 1;i<=a;i++){
        if(a%i==0)
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}