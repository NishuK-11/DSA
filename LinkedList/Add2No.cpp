//ADD 2 NUMBERS REPRESENTED BY LINKED LISTS
// step1:- reverse both the linked list and add
// step2:- reverse the linked list formed

// 1. carry= 0
// 2. sum first
// 3. digit first = sum%10
// 4. create node for digit
// 5. carry nikalo carry=sum/10;

class Solution{
    private:
    Node* reverse(Node* head){
        Node* curr = head;
        Node*prev = NULL;
        Node* next = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void insertAtTail(struct Node* head, struct Node* tail,int val){

        Node* temp = new Node(val);
        //empty ;ist
        if(head == NULL){
            head = temp;
            tail = temp;
            return ;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }

    struct Node* add(struct Node* first, struct Node* second){
        int carry = 0;
        Node* anshead = NULL;
        Node* ansTail = NULL;

        while(first!=NULL && second!=NULL){
            int sum = carry + first->data + second->data;
            int digit = num%10;
            Node* temp = new Node(digit);
            //createNode and add in answer linked list
            insertAtTail(ansHead,ansTail,digit);

            carry = sum/10;
            first = first->next;
            secomd = second->next;
        }
        while(first!=NULL){
            int sum = carry + first->data;
            int digit = sum%10;
            //create node and add answer in LL
            insertAtTail(ansHead,ansTail,digit);
            carry = sum/10;
            first = first->next;
        }
        while(second!=NULL){
            int sum = carry + second->data;
            int digit = sum%10;
            //create node and add answer in LL
            insertAtTail(ansHead,ansTail,digit);
            carry = sum/10;
            secomd = second->next;

        }

        while(carry!=0){
            int sum = carry;
            int digit = sum%10;
            //create node and add answer in LL
            insertAtTail(ansHead,ansTail,digit);
            carry = sum/10;
        }
        return head;
    }

    struct Node* add(struct Node* first, struct Node* second){
        int carry = 0;
        Node* anshead = NULL;
        Node* ansTail = NULL;

        while(first!=NULL && second!=NULL || carry!=0){
            int val1 = 0;
            if(first!=NULL){
                val1 = first->data;
            }
            int val2 = 0;
            if(second!=NULL){
                val2 = second->data;
            }

            int sum = carry+val1+val2;
            int digit  = sum%10;
            insertAtTail(absHead,ansTail,digit){
                curry = sum/10;
                if(first!=NULL){
                    first = first->NULL;
                }
                if(second!=NULL){
                    second = first->NULL;
                }
            }
            return anshead;
    }

    publlic:
    struct Node* add TwoLinkedLists(struct Node* first,struct Node* second){
        first = reverse(first);
        second = reverse(second);
        //add two link list
        Node* ans = add(first,second);
        //step 3:- ans ko reverse kar do
        ans = reverse(ans);
    }
}