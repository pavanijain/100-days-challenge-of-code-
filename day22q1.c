//Q43: Write a program to check if a number is a strong number.

#include<stdio.h>
int sum_of_factorial_of_digits (int x);

int main (){
    int a;
    scanf("%d",&a);
    (a==sum_of_factorial_of_digits (a))?printf("Strong number\n"):printf("Not strong number\n");
    return 0;
}

int sum_of_factorial_of_digits (int x){
    int sum = 0;
    while(x!=0){
        int y = x%10;
        x /= 10;
        int factorial = 1;
        while(y!=1){
            factorial *= y;
            y--;
        }
        sum += factorial;
    }
    return sum;
}