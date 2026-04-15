#include <stdio.h>

int main(){
    int A[100], n, i, largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 2){
        printf("Need at least 2 elements\n");
        return 0;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    largest = A[0];
    second = A[1];

    if(second > largest){
        int temp = largest;
        largest = second;
        second = temp;
    }

    for(i = 2; i < n; i++){
        if(A[i] > largest){
            second = largest;
            largest = A[i];
        }
        else if(A[i] > second && A[i] != largest){
            second = A[i];
        }
    }

    printf("Largest = %d\nSecond Largest = %d\n", largest, second);

    return 0;
}
