#include <stdio.h>

void bubble_sort(int A[], int N){
    int i, j, temp;

    for(i = 0; i < N - 1; i++){
        for(j = 0; j < N - i - 1; j++){
            if(A[j] > A[j + 1]){
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main(){
    int A[100], N, i;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    printf("Enter elements:\n");
    for(i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }

    bubble_sort(A, N);

    printf("Sorted array:\n");
    for(i = 0; i < N; i++){
        printf("%d ", A[i]);
    }

    return 0;
}
