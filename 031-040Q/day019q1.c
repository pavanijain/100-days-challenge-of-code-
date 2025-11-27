//Q37: Write a program to find the LCM of two numbers.

#include<stdio.h>

int main (){
    int a,b;
    scanf("%d %d",&a,&b);

    int i = (a<b)?a:b;
    while(i>=1){
        if(a%i==0&&b%i==0){
            break;
        }
        i--;
    }
    
    printf("%d\n",i*a/i*b/i); 
    return 0;
}