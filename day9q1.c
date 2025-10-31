//Q1: Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>

int main (){
    printf("Enter coefficients a b c: ");
    int a,b,c;
    scanf("%i%i%i",&a,&b,&c);

    int D = b*b-4*a*c;
    int r1 = (-b+pow(D,0.5))/(2*a);
    int r2 = (-b-pow(D,0.5))/(2*a);
    if(D<0){
        printf("Roots are complex\n");
    }else if(D==0){
        printf("Roots are real and same: %i\n",r1);
    }else{
        printf("Roots are real and different: %i, %i\n",r1,r2);
    }
    return 0;
}