/* Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/

#include<stdio.h>

int main (){
    for(int i=5;i!=0;i--){
        for(int e=(5-i);e!=0;e--){
            printf(" ");
        }
        for(int o=i;o!=0;o--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}