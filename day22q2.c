//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include<stdio.h>

int main (){
    int a;
    scanf("%d",&a);

    float sum = 1;
    while(a!=1){
        sum += (2.0*a-1)/(2*a);
        a--;
    }
    printf("Approximate sum: %.1f\n",sum);
    return 0;
}