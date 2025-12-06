//circular hai ki nhi bhayiyon aur behno
#include<iostream>
using namespace std;
struct Node{
    Node* next;
    int data;
    Node(int val):data(val),next(NULL){}
};
Node* createNode(int val){
    return new Node(val);
}
void printList(Node* head){
    while(head!=nullptr){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

bool isCircularList(Node* head) {
    // If the list is empty, it's not circular
    if (head == NULL) {
        return false;
    }

    Node* temp = head->next;
    // Traverse the list until we reach NULL or loop back to the head
    while (temp != NULL && temp != head) {
        temp = temp->next;
    }

    // If we looped back to the head, it's circular
    return temp == head;
}


int main() {
    // Create a non-circular list: 1 -> 2 -> 3 -> NULL
    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(1);

    cout << "Is the list circular? " << (isCircularList(head) ? "Yes" : "No") << endl;

    // Make the list circular: 1 -> 2 -> 3 -> 1
    head->next->next->next->next = head;

    cout << "Is the list circular now? " << (isCircularList(head) ? "Yes" : "No") << endl;

    return 0;
}