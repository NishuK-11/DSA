#include<iostream>
using namespace std;
//REVERSE THE LINKED LIST
struct Node {
    int data;
    Node* next;

    // Constructor for convenience
    Node(int val) : data(val), next(NULL) {}
};
Node* createNode(int val) {
    return new Node(val);
}
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

void reverseLinkedList(Node* &head, NodeNode* prev* curr, ){
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* forward = curr->next;
    reverseLinkedList(head,forward,curr);
    curr->next = prev;
}

Node* reverse(Node* head){
    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* chhotaHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return chhotaHead;
}

// Node* reverseLinkedList(Node* head){
//     if(head==NULL || head->next == NULL){
//         return head;
//     }
//     Node*prev = NULL;
//     Node*curr = head;
//     Node* forward = NULL;
//     while(curr!=NULL){
//         forward = curr->next;
//         curr->next= prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
// }

int getLength(Node* head){
    int len = 0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    return len;
}
Node* findMiddle(Node* head){
    int len = getLength(head);
    int ans = (len/2);
    Node* temp = head;
    int cnt = 0;
    while(cnt<ans){
        temp = temp->next;
        cnt++;
    }
    return temp;
}
Node* getMiddle(Node* head){
    if(head == NULL ||head->next == NULL){
        return head;
    }
    if(head->next-> next == NULL ){
        return head->next;
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow= slow->next;
    }
    return slow;
}

int main(){
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> NULL
    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);

    cout << "Original List: ";
    printList(head);

    // Reverse the linked list
    //head = reverseLinkedList(head);
    reverseLinkedList(head, head, NULL);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}