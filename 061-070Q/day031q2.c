/* Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include<stdio.h>

int main (){
    int size;
    scanf("%d",&size);

    int arr [size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}