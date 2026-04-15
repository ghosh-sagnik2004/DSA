///ALGORITHM
//Push:
//Step1: if Top =Max– 1
//Print “Overflow”
//Gotostep4
//[End of if]
//Step 2: Set Top = Top + 1
//Step3:Set STACK[Top] = val
//Step 4: Exit
//Pop:
//Step1: if Top =-1
//Print “Underflow”
//Goto step 4
//(End of if)
//Step2:Setval=STACK[Top]
//Step 3: Set Top = Top – 1
//Step 4: Exit
//Peek:
//Step 1: if Top =Null
//Print “Underflow”
//Goto step 3
//(End of if)
//Step2: Return STACK[Top]
//Step 3: Exit
#include <stdio.h>
#define MAX 100

int STACK[MAX], Top = -1;

void push(int val){
    if(Top == MAX - 1){
        printf("Overflow\n");
        return;
    }
    Top++;
    STACK[Top] = val;
}

void pop(){
    if(Top == -1){
        printf("Underflow\n");
        return;
    }
    printf("Popped element: %d\n", STACK[Top]);
    Top--;
}

void peek(){
    if(Top == -1){
        printf("Underflow\n");
        return;
    }
    printf("Top element: %d\n", STACK[Top]);
}

int main(){
    int choice, val;

    while(1){
        printf("\n1.Push 2.Pop 3.Peek 4.Exit\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                push(val);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
//Discussion:
//Push: Time O(1), Space O(1)
//Pop: Time O(1), Space O(1)
//Peek: Time O(1), Space O(1)
