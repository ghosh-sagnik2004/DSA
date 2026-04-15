#include <stdio.h>

void insertion_sort(int arr[], int N){
    int j, i, temp;

    for(j = 1; j < N; j++){
        temp = arr[j];
        i = j - 1;

        while(i >= 0 && temp <= arr[i]){
            arr[i + 1] = arr[i];
            i = i - 1;
        }

        arr[i + 1] = temp;
    }
}

int main(){
    int arr[100], N, i;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    printf("Enter elements:\n");
    for(i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    insertion_sort(arr, N);

    printf("Sorted array:\n");
    for(i = 0; i < N; i++)
        printf("%d ", arr[i]);

    return 0;
}
