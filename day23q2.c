/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/

#include<stdio.h>

int main (){
    for(int i=0;i<5;i++){
        for(int i=0;i<5;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}