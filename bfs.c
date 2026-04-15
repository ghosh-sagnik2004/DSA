#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

// Enqueue
void enqueue(int value){
    if(rear == MAX - 1){
        return;   // Overflow
    }
    if(front == -1){
        front = 0;
    }
    queue[++rear] = value;
}

// Dequeue
int dequeue(){
    if(front == -1 || front > rear){
        return -1;   // Underflow
    }
    return queue[front++];
}

// Check if queue empty
int isEmpty(){
    return (front == -1 || front > rear);
}

// BFS Function
void BFS(int adj[MAX][MAX], int n, int start){
    int visited[MAX] = {0};

    front = rear = -1;   // Reset queue

    enqueue(start);
    visited[start] = 1;

    printf("BFS Traversal starting from vertex %d: ", start);

    while(!isEmpty()){
        int current = dequeue();
        printf("%d ", current);

        for(int i = 0; i < n; i++){
            if(adj[current][i] == 1 && !visited[i]){
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

int main(){
    int adj[MAX][MAX];
    int n, start;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix (0 or 1):\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &adj[i][j]);
        }
    }

    printf("Enter the starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    BFS(adj, n, start);

    return 0;
}