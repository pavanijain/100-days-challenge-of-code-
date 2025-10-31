//Q28: Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>

int main (){
    int a;
    scanf("%i",&a);
    
    int i=1;
    int b=2;
    while(b<=a){
        i *= b;
        b += 2;
    }
    printf("%i (",i);

    for(int I=2;I<=a;I+=2){
        printf("%i",I);
        if(I==a){
            break;
        }
        printf(" * ");
    }
    printf(")\n");
    return 0;
}
