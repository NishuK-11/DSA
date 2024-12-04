/*
linked list -> linear data structure made of collection of node(combination of data and address of next node)
linked list -> dynamic data structure(grow and shrink)--> no memeory wastage
Insertion/deletion -> easy hota hai no shift needed
5||710      710|8|910         910|11|null
TYPES OF LINKED LIST:-
1. singly linked list
2. doubly linked list 
3. circular L.L
4. circular doubly LL 

Singly link list -> connection of node


*/

#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;//next node to darsha rha hoga
    //constructor
    Node(int data){
        this -> data=data;
        this -> next =NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        //memeory free
        if(this->next!=NULL){
            delete next;
            this -> next =NULL;
        }

        cout<<"memeory is free for node with data "<<value<<endl;
    }

};
void insertAtHead(Node* &head , int d){
        //new node create
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }
    void insertAtTail(Node* &tail , int d){
        //new node create
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = tail -> next;

    }

    void insertAtPosition(Node* &head,Node* &tail, int position, int d){


        if(position == 1){
            insertAtHead(head,d);
            return;
        }
        Node* temp = head;
        int cnt = 1;

        while(cnt < position -1){
            temp = temp -> next;
            cnt++;
        }
        //inserting at last position
        if(temp->next == NULL){
            insertAtTail(tail,d);
            return ;
        }

        //creating a node for d
        Node* nodeToInsert = new Node(d);

        nodeToInsert -> next = temp->next;
        temp->next = nodeToInsert;
    }

    void deletion(int position, Node* &head){
        if(position ==1){
            Node *temp = head;
            head = head->next;
            //memeory free of start node
            temp -> next = NULL;
            delete temp;
        }
        else{
            //deleting any middle or last node
            Node* curr = head;
            Node* prev = NULL;
            int cnt = 1;
            while(cnt< position){
                prev = curr;
                curr = curr-> next;
                cnt++;
            }

            prev->next = curr->next;
            curr -> next = NULL;
            delete curr;
        }
    }


    //InsertAtTail -> ending node ke aage new node add karega tail->pointer pf node type(last node darshayega)

    void print(Node* &head){
        Node* temp = head;

        while(temp != NULL){
            cout<< temp -> data<<" ";
            temp = temp -> next;
        }
        cout<< endl;
    }

int main(){
    //created a new node
    Node* node1 = new Node(10);
    // cout<<node1-> data<<endl;
    // cout<<node1 -> next <<endl;
    //head pointed to node 1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    // insertAtHead(head, 12);
    insertAtTail(tail, 12);
    print(head);

    // insertAtHead(head,15);
    insertAtTail(tail,15);
    print(head);

    insertAtPosition(head,tail, 4 , 22);
    print(head);

    cout<<"head"<<head -> data <<endl;
    cout<<"tail"<<tail -> data<<endl;


    deletion(1,head);
    print(head);
    return 0;
}
/*
//singly linked list /*
5|710   710|10|810     810|12|910   910|14|NULL 

Insertion


*/

