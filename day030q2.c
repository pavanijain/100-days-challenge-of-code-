/* Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include<stdio.h>

int main (){
    int size;
    scanf("%d",&size);
    int array [size];
    int p=0,n=0,z=0;
    for(int i = 0;i<size;i++){
        scanf("%d",&array[i]);
        if(array[i]<0){
            n++;
        }else if(array[i]==0){
            z++;
        }else{
            p++;
        }
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n",p,n,z);
    return 0;
}