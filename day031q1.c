/* Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include<stdio.h>

int main (){
    int size,num;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);

    int position = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            position = i+1;
            break;
        }
    }

    (position!=0)?printf("Found at index %d\n",position):printf("-1\n");
    return 0;
}