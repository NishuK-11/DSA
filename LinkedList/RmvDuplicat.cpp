#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val):data(val),next(NULL){}
};
Node* createNode(int value){
    return new Node(value);
}
void printList(Node* head){
    while(head!=nullptr){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL";
}
//Remove  duplicates from sorted list
Node* UniqueSortedList(Node* head){
    //empty list
    if(head == NULL){
        return;
    }
    //non-empty list hai yarr
    Node* curr = head;
    while(curr!=NULL){
        if(curr->next!=NULL && curr->data == curr->next->data){
            Node* next_next = curr->next->next;
            Node* nodeToDelete = curr->next;
            delete(nodeToDelete);
            curr->next = next_next; 
        }
        else{//not  equal
            curr = curr->next;
        }
    }
    return head;
}

//Remove duplicates from unordered list
// 1 element ke liye aage ki sari linked list ko traverse karenge



int main(){
    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    cout<<"original list"<<endl;
    printList(head);
}
