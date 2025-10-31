/* Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/

#include<stdio.h>

int main (){
    for(int i=5;i!=0;i--){
        for(int o=i-1;o!=0;o--){
            printf(" ");
        }
        for(int e=i;e<=5;e++){
            printf("%d",e);
        }
        printf("\n");
    }
    return 0;
}