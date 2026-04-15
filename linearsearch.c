#include <stdio.h>

int main(){
    int A[100], n, key, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Enter key to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++){
        if(A[i] == key){
            printf("Element found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Element not found\n");

    return 0;
}
