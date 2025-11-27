/* Q53: Write a program to print the following pattern:

*
***
*****
*******
*********
*******
*****
***
*

*/

#include<stdio.h>

int main (){
    for(int i = 1;i<6;i++){
        for(int o=(i*2)-1;o!=0;o--){
            printf("*");
        }
        printf("\n");
    }

    for(int i = 4; i>0;i--){
        for(int o=(i*2)-1;o!=0;o--){
            printf("*");
        }
        printf("\n");       
    }

    return 0;
}