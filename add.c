#include <stdio.h>

int main(){
    int arr[100], n, i, pos, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &val);

    printf("Enter position: ");
    scanf("%d", &pos);

    if(pos < 0 || pos > n){
        printf("Invalid Position\n");
        return 0;
    }

    for(i = n; i > pos; i--){
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}