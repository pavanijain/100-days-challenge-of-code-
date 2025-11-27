
/*Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>
int main() {
    int n, m, a[10][10], i, j;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d", &a[i][j]);
    for(int k=0;k<n+m-1;k++) {
        if(k<m)
            i=0, j=k;
        else
