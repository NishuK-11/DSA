#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

Node* createNode(int val){
    return new Node(val);
}
void printList(Node* head){
    while(head!=nullptr){
        cout<<head->data<<"->";
        head = head->next;
    }
}


Node* kReverse(Node* head, int k){
    //base call
    if(head == NULL){
        return NULL;
    }
    //step1: reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node*prev = NULL;
    int count = 0;
    while(curr!=NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    //step 2:- Recursion dekhlega aage ka 
    if(next!=NULL){
        head->next = kReverse(next,k);
    }
    //step 3 :-return head of reversed list
    return prev;
}

int main(){
    Node* head = createNode(2);
    head->next = createNode(4);
    head->next->next = createNode(7);
    head->next->next->next = createNode(9);
    cout<<"original list";
    printList(head);
    // Reverse the linked list in groups of k
    int k = 2;
    head = kReverse(head, k);
    cout << "Reversed List in Groups of " << k << ": ";
    printList(head);
}