/* Q47: Write a program to print the following pattern:
*
**
***
****
*****
*/

#include<stdio.h>

int main (){
    for(int i = 1;i<=5;i++){
        for(int e=i;e!=0;e--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}