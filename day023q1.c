//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include<stdio.h>

int main (){
    int a; 
    scanf("%d",&a);

    float sum = 0;
    for(int i=a;i!=0;i--){
        sum += (2.0*i)/(4*(i-1)+3);
    }

    printf("%.2f\n",sum);
    return 0;
}