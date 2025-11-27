/* Q59: Count even and odd numbers in an array.

Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include<stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    int array [size];
    int e=0,o=0;
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
        if(array[i]%2==0){
            e++;
        }else{
            o++;
        }
    }
    printf("Even=%d, Odd=%d\n",e,o);
    return 0;
}