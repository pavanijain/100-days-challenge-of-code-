//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>

int main (){
    printf("Enter two integers and an operation(+, -, *, /, %%): ");
    int a,b;
    char c;
    scanf("%i %i %c",&a,&b,&c);
    switch(c){
        case '+':
        printf("%i\n",a+b);
        break;
        case '-':
        printf("%i\n",a-b);
        break;
        case '*':
        printf("%i\n",a*b);
        break;
        case '/':
        printf("%i\n",a/b);
        break;
        case '%':
        printf("%i\n",a%b);
        break;
    }
    return 0;
}