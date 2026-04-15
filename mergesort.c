#include <stdio.h>
#include <limits.h>

void merge(int A[], int beg, int mid, int end){
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int L[n1 + 1], R[n2 + 1];
    int i, j, k;

    for(i = 0; i < n1; i++)
        L[i] = A[beg + i];

    for(j = 0; j < n2; j++)
        R[j] = A[mid + 1 + j];

    L[n1] = INT_MAX;   // Sentinel
    R[n2] = INT_MAX;

    i = 0;
    j = 0;

    for(k = beg; k <= end; k++){
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
    }
}

void merge_sort(int A[], int beg, int end){
    if(beg < end){
        int mid = (beg + end) / 2;
        merge_sort(A, beg, mid);
        merge_sort(A, mid + 1, end);
        merge(A, beg, mid, end);
    }
}

int main(){
    int A[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    merge_sort(A, 0, n - 1);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}
