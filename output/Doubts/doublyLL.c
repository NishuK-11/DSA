#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
void printList(struct Node*head){
    struct Node*curr = head;
    while(curr!=NULL){
        printf("%d",curr->data);
        printf("\t");
        curr = curr->next;
    }
    printf("\n");
}

struct Node* delHead(struct Node* head){
    if(head==NULL){
        return head;
    }
    if(head->next == NULL){
        free(head);
        return NULL;
    }
    struct Node* curr = head;
    head = head->next;
    head->prev = NULL;
    free(curr);
    return head;
}
struct Node* delLast(struct Node* head){
    if (head == NULL) {
        return NULL;
    }

    // Case 2: If there's only one node, delete it and return NULL
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    struct Node*curr = head;
    struct Node* back = head;
    while(curr->next!=NULL){
        back = curr;
        curr = curr->next;
    }
    back->next = curr->next;

    free(curr);
    return head;
    
}

struct Node* delAtPos(struct Node* head, int pos){
    struct Node* curr = head;
    struct Node* back = head;
    if (head == NULL || pos <= 0) {
        return head;  // Edge case: Invalid position or empty list
    }
    if(pos==1){
        return delHead(head);
    }
    while(pos-1){
        head = curr;
        curr = curr->next;
        pos--;
    }
    if (curr == NULL) {
        return head;  // If position is out of bounds, return the original list
    }
    back->next = curr->next;
    if(curr->next!=NULL){
        curr->next->prev = back;
    }
    free(curr);
    return head;
}

int main(){
    struct Node* head = createNode(3);
    struct Node* second = createNode(4);
    struct Node* third = createNode(5);

    head->next = second;
    head->prev = NULL;

    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = NULL;
    printList(head);
    delAtPos(head,2);
    printList(head);

}