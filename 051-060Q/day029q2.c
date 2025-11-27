/* Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include<stdio.h>

int main (){
    int size;
    scanf("%d",&size);
    int array [size];
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    
    int max = array[0],min = array[0];
    for(int i=1;i<size-1;i++){
        if(array[i]>max)
            max = array[i];
    
        if(array[i]<min)
            min = array[i];
        
    }
    printf("Max=%d, Min=%d\n",max,min);
    return 0;
}