

# include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    //constructor
    Node(int d){
        this-> data = d;
        this -> prev = NULL;
        this-> next = NULL;
    }
};
//traversing a linked list
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp ->data<<" ";
        temp=temp-> next;
    }
    cout<<endl;

}
//gives length of linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node* tail,Node* &head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head -> prev = temp;
        head=temp;
    }
}
void insertAtTail(Node* tail,Node* &head,int d){
        if(tail == NULL){
            Node* temp = new Node(d);
            tail =temp;
            head = temp;
        }
        else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
        }
}
void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    //insert at start
    if(position == 1){
        insertAtHead(tail,head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    } 
    //insertion at the last position
    if(temp -> next == NULL){
        insertAtTail(tail,head,d);
        return;
    }
    //creating at middle 
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp -> next;
    temp ->next->prev  = nodeToInsert;
    temp ->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<getLength(head)<<endl;


    insertAtHead(tail,head,11);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtHead(tail,head,6);
    print(head);

    
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtTail(tail,head,5);
    print(head);
    
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail,head,2,100);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail,head,1,19);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail,head,7,400);
    print(head);
    
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
}