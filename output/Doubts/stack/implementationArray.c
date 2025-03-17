#include <stdio.h>
#include <stdlib.h>
#define MAX 100 //,ax size stack
struct Stack{
    int arr[MAX];
    int top;
};
//initialise stack
void initStack(struct Stack* stack){
    stack->top = -1;
}
int isEmpty(struct Stack* stack){
    return stack->top == -1;
}
//if stack is full
int isFull(struct Stack* stack){
    return stack->top == MAX-1;
}
void push(struct Stack* stack,int value){
    if(isFull(stack)){
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = value;
}
int pop(struct Stack* stack){
    if(isEmpty(stack)){
        printf("stack underflow\n");
        return -1;
    }
    return stack->arr[stack->top--];
}
int peek(struct Stack* stack){
    if(isEmpty(stack)){
        printf("empty");
        return -1;
    }
    return stack->arr[stack->top];
}
void printStack(struct Stack* stack){
    if(isEmpty(stack)){
        printf("Stack is Empty\n");
        return;
    }
    for(int i = stack->top;i>=0;i--){
        printf("%d",stack->arr[i]);
    }
    printf("\n");
}
int main(){
    struct Stack stack;
    initStack(&stack);
    push(&stack,10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Stack elements: ");
    printStack(&stack);

    printf("Top element: %d\n", peek(&stack));

    printf("Popped: %d\n", pop(&stack));

    printf("Stack after pop: ");
    printStack(&stack);

    return 0;
}