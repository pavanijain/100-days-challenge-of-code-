//Q36: Write a program to find the HCF (GCD) of two numbers.

#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    int smaller = (a<b)?a:b;
    for(int i = smaller; i >=1;i--){
        if(a%i==0&&b%i==0){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}