// ALGORITHM: BINARY SEARCH

// Step 1: Start
// Step 2: Read n
// Step 3: Input sorted array
// Step 4: Read key element
// Step 5: Set low = 0, high = n-1
// Step 6: While low <= high
//             mid = (low + high) / 2
//             If arr[mid] == key
//                  Print "Element Found"
//                  Stop
//             Else if key < arr[mid]
//                  high = mid - 1
//             Else
//                  low = mid + 1
// Step 7: If not found, Print "Element Not Found"
// Step 8: Stop
#include <stdio.h>

int main(){
    int A[100], n, key, low, high, mid, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Enter key to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high){
        mid = (low + high) / 2;

        if(A[mid] == key){
            printf("Element found at position %d\n", mid);
            return 0;
        }
        else if(A[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Element not found\n");

    return 0;
}
// DISCUSSION:
// Binary Search is a searching technique.
// It works only on SORTED array.
// It repeatedly divides the search space into half.
// Compare key with middle element.
// If key == middle → element found.
// If key < middle → search left half.
// If key > middle → search right half.
// Continue until element is found or search space becomes empty.

// TIME COMPLEXITY:
// Best Case   : O(1)        (Element found at middle)
// Average Case: O(log n)
// Worst Case  : O(log n)
// Reason: Search space is divided into half every time.

// SPACE COMPLEXITY:
// O(1) (Iterative version)
