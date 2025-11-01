//Q8: Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>

int main() {
    printf("Enter a number: ");
    int a;
    scanf("%d",&a);
    int sum=0;
    for(int i=1;i<=a;i++){
        sum += i;
    }
    printf("Sum=%d\n",sum);
    return 0;
}