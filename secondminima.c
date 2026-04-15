#include <stdio.h>

int main(){
    int n, i, min, min1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if(n < 2){
        printf("Second minimum does not exist\n");
        return 0;
    }

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Initialize first two elements
    if(arr[0] > arr[1]){
        min = arr[1];
        min1 = arr[0];
    }
    else{
        min = arr[0];
        min1 = arr[1];
    }

    // Start from index 2
    for(i = 2; i < n; i++){
        if(arr[i] < min){
            min1 = min;
            min = arr[i];
        }
        else if(arr[i] > min && arr[i] < min1){
            min1 = arr[i];
        }
    }

    printf("Second minimum element is %d\n", min1);

    return 0;
}
