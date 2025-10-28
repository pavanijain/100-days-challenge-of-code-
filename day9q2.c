/* Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

#include<stdio.h>

int main (){
    printf("Enter your percentage: ");
    int a;
    scanf("%d",&a);
    if(a<60){
        printf("Grade F\n");
    }else if(a<69){
        printf("Grade D\n");
    }else if(a<79){
        printf("Grade C\n");
    }else if(a<89){
        printf("Grade B\n");
    }else{
        printf("Grade A\n");
    }
    return 0;
}
