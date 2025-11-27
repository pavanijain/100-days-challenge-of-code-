/* Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/

#include<stdio.h>

int main (){
    for(int i=1;i<19;i++){
        if(i==2||i==6||i==12||i==16){
            printf("\n");
        }else{
            printf("*\n");
        }
    }
    return 0;
}