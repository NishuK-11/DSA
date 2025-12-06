

class Solution {
public:
    Node* deleteNode(Node* head,int n) {
        Node* temp = head;
        Node* curr = head;
        if(head==NULL || head->next == 0 ){
            return head;
        }
        while(curr!=NULL){
            while(n-2>0){
            head = head->next;
            n--;
            }
            if(head->next->next!=NULL){
                curr = head->next->next;
                curr = curr->next;
            }
            else{
                curr->next = NULL;
            }
        }
        return curr;
        
    }
};