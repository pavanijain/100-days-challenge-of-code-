//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>

int main (){
    printf("Enter time in seconds: ");
    int n;
    scanf("%d",&n);
    int hr = n/3600;
    int min = (n%3600)/60;
    int sec = ((n%3600)%60);
    printf("%d:%d:%d\n",hr,min,sec);
    return 0;
}