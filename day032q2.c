/* Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/

#include<stdio.h>

int main(){
    int a,digit;
    scanf("%d",&a);
    int arr [10]={0};
    while(a!=0){
        digit = a%10;
        arr[digit]++;
        a /= 10;
    }

    int num = 0;
    int highest_freq = arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>highest_freq){
            highest_freq = arr[i];
            num = i;
        }
    }
    
    printf("%d\n",num);
    return 0;
}