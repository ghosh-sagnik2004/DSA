#include <stdio.h>

int partition(int arr[], int beg, int end){
    int piv = beg;
    int p = beg + 1;
    int q = end;
    int temp;

    while(1){
        while(p <= q && arr[p] <= arr[piv])
            p++;

        while(p <= q && arr[q] >= arr[piv])
            q--;

        if(p <= q){
            temp = arr[p];
            arr[p] = arr[q];
            arr[q] = temp;
        }
        else
            break;
    }

    temp = arr[piv];
    arr[piv] = arr[q];
    arr[q] = temp;

    return q;
}

void quick_sort(int arr[], int beg, int end){
    if(beg < end){
        int pivot = partition(arr, beg, end);
        quick_sort(arr, beg, pivot - 1);
        quick_sort(arr, pivot + 1, end);
    }
}

int main(){
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quick_sort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
