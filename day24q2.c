/* Q48: Write a program to print the following pattern:
1
12
123
1234
12345
*/

#include<stdio.h>

int main (){
    for(int i = 1;i<=5;i++){
        for(int e = 1;e<=i;e++){
            printf("%d",e);
        }
        printf("\n");
    }
    return 0;
}