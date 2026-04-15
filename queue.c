// ALGORITHM: QUEUE USING ARRAY

// Step 1: Start
// Step 2: Initialize FRONT = -1, REAR = -1

// ENQUEUE(value)
// Step 3: If REAR == MAX-1
//             Print "Overflow"
//         Else
//             If FRONT == -1
//                 FRONT = 0
//             REAR = REAR + 1
//             QUEUE[REAR] = value

// DEQUEUE()
// Step 4: If FRONT == -1 OR FRONT > REAR
//             Print "Underflow"
//         Else
//             Print QUEUE[FRONT]
//             FRONT = FRONT + 1

// DISPLAY()
// Step 5: If FRONT == -1 OR FRONT > REAR
//             Print "Queue is Empty"
//         Else
//             For i = FRONT to REAR
//                 Print QUEUE[i]

// Step 6: Stop
#include <stdio.h>
#define MAX 100

int QUEUE[MAX];
int FRONT = -1, REAR = -1;

void enqueue(int val){
    if(REAR == MAX - 1){
        printf("Overflow\n");
        return;
    }

    if(FRONT == -1)
        FRONT = 0;

    REAR++;
    QUEUE[REAR] = val;
    printf("Inserted: %d\n", val);
}

void dequeue(){
    if(FRONT == -1 || FRONT > REAR){
        printf("Underflow\n");
        return;
    }

    printf("Deleted: %d\n", QUEUE[FRONT]);
    FRONT++;
}

void display(){
    if(FRONT == -1 || FRONT > REAR){
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    for(int i = FRONT; i <= REAR; i++){
        printf("%d ", QUEUE[i]);
    }
    printf("\n");
}

int main(){
    int choice = 0, val;

    while(choice != 4){
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
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
// TIME COMPLEXITY DISCUSSION (QUEUE - ARRAY)

// ENQUEUE OPERATION
// Best Case   : O(1)
// Average Case: O(1)
// Worst Case  : O(1)
// Reason: Insertion is done at REAR directly without shifting elements.

// DEQUEUE OPERATION
// Best Case   : O(1)
// Average Case: O(1)
// Worst Case  : O(1)
// Reason: Deletion is done from FRONT directly.

// DISPLAY OPERATION
// Best Case   : O(1)        (if queue is empty)
// Average Case: O(n)
// Worst Case  : O(n)
// Reason: We traverse from FRONT to REAR.

// SPACE COMPLEXITY
// O(n)  (Because array of size MAX is used)
