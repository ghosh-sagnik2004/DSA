#include <stdio.h>

void selection_sort(int arr[], int n){
    int i, j, min, temp;

    for(i = 0; i < n - 1; i++){
        min = i;

        for(j = i + 1; j < n; j++){
            if(arr[min] > arr[j])
                min = j;
        }

        if(i != min){
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main(){
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    selection_sort(arr, n);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
