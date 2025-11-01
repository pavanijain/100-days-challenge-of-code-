//Q33: Write a program to check if a number is an Armstrong number.

#include<stdio.h>
#include<math.h>
int number_of_digits (int x);
int sum_of_digits(int x,int power_of_digits);

int main() {
    int a,power;
    scanf("%i",&a);
    power = number_of_digits (a);
    (a==sum_of_digits(a,power))?printf("Armstrong\n"):printf("Not Armstrong\n");
    return 0;
}

int number_of_digits (int x){
    int i = 0;
    while(x!=0){
        x /= 10;
        i++;
    }
    return i;
}

int sum_of_digits(int x,int power_of_digits){
    int z=0;
    while(x!=0){
        z += pow(x%10,power_of_digits);
        x /= 10; 
    }
    return z;
}