#include <iostream>
using namespace std;
#include <queue>
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
       left=right=NULL;
    };
};
int main(){
    int first,second;
    int rootval;
    cout<<"enter root value"<<endl;
    cin>>rootval;
    queue<Node*>q;
    Node* root = new Node(rootval);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        //for left
        cout<<"enter the left child of"<<temp->data<<endl;
        cin>>first;
        if(first!=-1){
            temp->left = new Node(first);
            q.push(new Node(first));
        }
        //for right
        cout<<"enter the lright child of"<<temp->data<<endl;
        cin>>second;
        if(second!=-1){
            temp->right = new Node(second);
            q.push(new Node(second));
        }
    }

}