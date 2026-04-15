// ALGORITHM: CIRCULAR QUEUE USING ARRAY

// Step 1: Start
// Step 2: Initialize FRONT = -1, REAR = -1

// ENQUEUE(value)
// Step 3: If (REAR + 1) % MAX == FRONT
//             Print "Overflow"
//         Else
//             If FRONT == -1
//                 FRONT = REAR = 0
//             Else
//                 REAR = (REAR + 1) % MAX
//             QUEUE[REAR] = value

// DEQUEUE()
// Step 4: If FRONT == -1
//             Print "Underflow"
//         Else
//             Print QUEUE[FRONT]
//             If FRONT == REAR
//                 FRONT = REAR = -1
//             Else
//                 FRONT = (FRONT + 1) % MAX

// Step 5: Stop
#include <stdio.h>
#define MAX 100

int QUEUE[MAX];
int FRONT = -1, REAR = -1;

void enqueue(int val){
    if((REAR + 1) % MAX == FRONT){
        printf("Overflow\n");
        return;
    }

    if(FRONT == -1)
        FRONT = REAR = 0;
    else
        REAR = (REAR + 1) % MAX;

    QUEUE[REAR] = val;
    printf("Inserted: %d\n", val);
}

void dequeue(){
    if(FRONT == -1){
        printf("Underflow\n");
        return;
    }

    printf("Deleted: %d\n", QUEUE[FRONT]);

    if(FRONT == REAR)
        FRONT = REAR = -1;
    else
        FRONT = (FRONT + 1) % MAX;
}

void display(){
    if(FRONT == -1){
        printf("Queue is empty\n");
        return;
    }

    int i = FRONT;
    printf("Queue elements: ");
    while(1){
        printf("%d ", QUEUE[i]);
        if(i == REAR)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main(){
    int choice = 0, val;

    while(choice != 4){
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                enqueue(val);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
// TIME COMPLEXITY

// ENQUEUE:
// Best Case   : O(1)
// Average Case: O(1)
// Worst Case  : O(1)

// DEQUEUE:
// Best Case   : O(1)
// Average Case: O(1)
// Worst Case  : O(1)

// DISPLAY:
// Best Case   : O(1)
// Worst Case  : O(n)

// Space Complexity: O(n)
