//Q1: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>

int main (){
    printf("Enter a character: ");
    char a;
    scanf("%c",&a);

    if (a>='a'&&a<='z'){
        printf("Lowercase alphabet\n");
    }else if(a>='A'&&a<='Z'){
        printf("Uppercase alphabet\n");
    }else if(a>=0&&a<=9){
        printf("Digit\n");
    }else{
        printf("Special charactern\n");
    }
    return 0;
}