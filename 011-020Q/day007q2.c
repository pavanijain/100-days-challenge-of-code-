//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main (){
    printf("Enter an alphabet: ");
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        printf("Vowel\n");
    }else{
        printf("Consonant\n");
    }
    return 0;
}