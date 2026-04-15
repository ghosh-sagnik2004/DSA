#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Push
void push(int value){
    if(top == MAX - 1){
        return;   // Overflow
    }
    stack[++top] = value;
}

// Pop
int pop(){
    if(top == -1){
        return -1;   // Underflow
    }
    return stack[top--];
}

// Check if stack empty
int isEmpty(){
    return (top == -1);
}

// DFS Function (Iterative using Stack)
void DFS(int adj[MAX][MAX], int visited[MAX], int start, int n){
    top = -1;   // Reset stack

    push(start);

    printf("DFS Traversal starting from vertex %d: ", start);

    while(!isEmpty()){
        int current = pop();

        if(!visited[current]){
            printf("%d ", current);
            visited[current] = 1;

            // Push adjacent vertices in reverse order
            for(int i = n - 1; i >= 0; i--){
                if(adj[current][i] == 1 && !visited[i]){
                    push(i);
                }
            }
        }
    }
    printf("\n");
}

int main(){
    int adj[MAX][MAX], visited[MAX] = {0};
    int n, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (0 or 1):\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &adj[i][j]);
        }
    }

    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    DFS(adj, visited, start, n);

    return 0;
}