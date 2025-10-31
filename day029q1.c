/* Q57: Find the sum of array elements.

Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include<stdio.h>

int main (){
    int size;
    scanf("%d",&size);
    int array [size];
    int sum = 0;
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
        sum += array[i];
    }
    printf("%d\n",sum);
    return 0;
}