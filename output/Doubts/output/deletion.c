#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

// Function to delete a node at a given position
struct Node* deletionAtPos(struct Node* head, int pos) {
    if (head == NULL) return NULL; // Edge case: Empty list

    struct Node* curr = head;

    // If deleting the first node
    if (pos == 1) {
        head = head->next;
        if (head) head->prev = NULL; // Update prev pointer of new head
        free(curr);
        return head;
    }

    // Traverse to the node to be deleted
    for (int i = 1; curr != NULL && i < pos; i++) {
        curr = curr->next;
    }

    if (curr == NULL) return head; // If position is out of range

    if (curr->next != NULL) {
        curr->next->prev = curr->prev; // Update prev of next node
    }

    if (curr->prev != NULL) {
        curr->prev->next = curr->next; // Update next of previous node
    }

    free(curr);
    return head;
}

// Function to delete the entire list
void deleteList(struct Node* head) {
    if (head == NULL) return;

    deleteList(head->next);
    free(head);
}


// Takes head pointer of the linked list and index
// as arguments and returns data at index.
int GetNth(struct Node *head, int index) {
  
    // If the list is empty or index is out of bounds
    if (head == NULL)
        return -1;

    // If index equals 1, return node's data
    if (index == 1)
        return head->data;

    // Recursively move to the next node
    return GetNth(head->next, index - 1);
}

int findNthFromLast(struct Node* head,int N){
    struct Node* main_ptr = head;
    struct Node* ref_ptr = head;
    //moving ref_ptr to Nth node from beginning
    for(int i = 1;i<N;i++){
        ref_ptr = ref_ptr->next;
       // if the ref_ptr reaches NULL, then it means N>Length of linked list
        if(ref_ptr == NULL){
            return -1;
        }
    }
    while (ref_ptr->next !=NULL){
        ref_ptr = ref_ptr->next;
        main_ptr = main_ptr->next;
    }
    return main_ptr->data;
}

int main() {
    // Creating a linked list
    struct Node* head = createNode(3);
    struct Node* second = createNode(4);
    struct Node* third = createNode(5);
    struct Node* fourth = createNode(6);

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    // Printing the linked list
    printList(head);

    // Deleting node at position 3
    head = deletionAtPos(head, 3);
    printf("After Deletion:\n");
    printList(head);

    // Deleting the entire list
    deleteList(head);
    head = NULL; // Avoid using a dangling pointer

    return 0;
}
