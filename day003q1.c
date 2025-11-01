//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main () {
    int a;
    printf("Enter the tempreture in celcius: ");
    scanf("%d",&a);
    printf("Tempreture in Fahrenheit is= %.1f\n",(a * 1.8)+32);
    return 0;
}