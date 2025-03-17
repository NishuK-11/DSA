#include<iostream>
#include<map>
using namespace std;
struct Node{
    Node* next;
    int data;
    Node(int val):data(val),next(NULL){}
};
Node* createNode(int val){
    return new Node(val);
}
void PrintList(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}
bool detectLoop(Node*head){
    if(head==NULL){
        return false;
    }
    map<Node* , bool>visited;
    Node* temp = head;
    while(temp!=NULL){
        if(visited[temp] == true){
            //cycle is present
            cout<<"Present on element"<<temp->data<<endl;
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node*slow = head;
    Node* fast = head;
    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }

        slow=slow->next;
        if(slow == fast){
            cout<<"present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;

}

Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head == NULL){
        return;
    }
    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;
    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;
}



int main(){
    Node* head = createNode(4);
    head->next = createNode(5);
    head->next->next = createNode(6);
    head->next->next->next = head->next;
    // cout<<"original list"<<endl;
    // PrintList(head);//yahan to infinite times print hote hi rhega as loop hai
    // if(detectLoop(head)){
    if(floydDetectLoop(head)!=NULL){
        cout<<"Cycle is present";
    }
    else{
        cout<<"No cycle is present";
    }
    Node* loop = getStartingNode(head);
    cout<<"starting at"<<loop->data<<endl;

    removeLoop(head);
    PrintList(head);//yahan dekho infinite times print nhi hoga as delete kar de rhe connection ko hi jahan loop shuru ho rha hai
}