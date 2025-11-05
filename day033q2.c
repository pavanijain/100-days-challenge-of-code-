/*Q66: Insert an element in a sorted array at the appropriate position.


Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/


#include <stdio.h>

int main() {
    int n, i, j, num;
    
    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n + 1];  // +1 to accommodate new element
    
    // Input sorted elements
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input element to insert
    printf("Enter element to insert: ");
    scanf("%d", &num);
    
    // Find correct position and shift elements
    for(i = n - 1; i >= 0 && arr[i] > num; i--) {
        arr[i + 1] = arr[i];
    }
    
    // Insert the element
    arr[i + 1] = num;
    n++;  // Increase size
    
    // Output the new sorted array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}
