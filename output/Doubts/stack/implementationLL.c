#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
//empty stack
int isEmpty(struct Node* top){
    return top == NULL;
}
struct Node* push(struct Node* top,int data){
    struct Node* newNode = createNode(data);
    newNode->next = top;
    return newNode;
}
struct Node* pop(struct Node* top){
    if(isEmpty){
        printf("Stack Underflow\n");
        return NULL;
    }
    struct Node* temp = top;
    printf("popped: %d\n",top->data);
    top = top->next;
    free(temp);
    return top;
}
int peek(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is Empty\n");
        return -1;
    }
    return top->data;
}
void printStack(struct Node* top) {
    struct Node* temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    struct Node* top = NULL; // Initialize empty stack

    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);

    printf("Stack elements: ");
    printStack(top);

    printf("Top element: %d\n", peek(top));

    top = pop(top);

    printf("Stack after pop: ");
    printStack(top);

    return 0;
}