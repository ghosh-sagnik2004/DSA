// ALGORITHM: DELETION IN ARRAY

// Step 1: Start
// Step 2: Input n (size of array)
// Step 3: Input n elements into arr[0] to arr[n-1]
// Step 4: Input position pos
// Step 5: If pos < 0 OR pos >= n
//             Print "Invalid position"
//             Stop
// Step 6: For i = pos to n-2
//             arr[i] = arr[i+1]
// Step 7: Decrease n by 1
// Step 8: Display arr[0] to arr[n-1]
// Step 9: Stop
#include <stdio.h>

int main(){
    int arr[100], n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if(pos < 0 || pos >= n){
        printf("Invalid position\n");
        return 0;
    }

    for(i = pos; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
// TIME COMPLEXITY

// Best Case   : O(1)
// (When deleting last element, no shifting needed)

// Average Case: O(n)

// Worst Case  : O(n)
// (When deleting first element, all elements shift)

// Space Complexity: O(1)
