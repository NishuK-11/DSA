// Approach 1:-
// 1. create clone list original link pointer 
// 2. random copy kar do

// Approach 2:-
// 1. create a clone list using next pointer of originla list 
// 2. map -> original node ki cloned node ke saath
// 3. cloneNode->random = originalNode->random

class Solution
{
    private:
        void insertAtTail(Node* &head,Node* &tail,int d){
            Node* newNode = new Node(d);
            if(head==NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }
    public:
        Node* copyList(Node* head){
            //step 1: create a clone list
            Node* cloneHead = NULL;
            Node* cloneTail = NULL;

            Node* temp = head;
            while(temp!=NULL){
                insertAtTail(cloneHead, cloneTail, temp->data);
                temp = temp->next;
            }

            //Step 2 :- Ceate a map
            unordered_map<Node* , Node*>oldToNewNode;

            Node* originalNode = head;
            Node* cloneNode = cloneHead;
            while (originalNode!=NULL && cloneNode!=NULL)
            {
                oldToNewNode[originalNode] = cloneNode;
                originalNode = originalNode->next;
                cloneNode = cloneNode->next;
            }
            originalNode = head;
            cloneNode = cloneHead;

            while(originalNode!=NULL){
                cloneNode->random = oldToNew[originalNode->next];
                originalNode = originalNode->next;
                cloneNode = cloneNode->next;
            }
            return clone
        }
}


            //APPROACH 3:-
            // 1. create a clone copyList
            // 2. clone nodes add in between original list 
            // 3. random pointer copy (temp->next->random = temp->random->next)
            // 4. revert changes done in step 2
            // 5. return ans 

class Solution{
    private:
    void insertAtTail(Node* &head,Node* &tail,int d){
        Node* newNode = new Node(d);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail = tail->newNode;
            tail = newNode;

        }
    }
    public:
        Node* copyList(Node* head){
            //step1: create a clone list

            Node* cloneHead = NULL;
            Node* cloneTail = NULL;
            Node* temp = head;
            while(temp!=NULL){
                insertAtTail(cloneHead,cloneTail,temp->data);
                temp = temp->next;
            }



            //step2:- cloneNodes add in between original list
        Node* originalNode = head;
        Node* cloneHead = cloneHead;

        while (priginalNode!=NULL && cloneNode!=NULL)
        {
            Node* next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;
            next = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = next;
        }
        

            //step 3:- random pointer copy
        temp = head;
        while (temp!=NULL)
        {
            if(temp->next!=NULL){
                if(temp->random!=NULL){
                    temp->next->random = temp->random->next;
                }
                else{
                    temp->next = temp->radom;
                }
            }
            temp=temp->next->next;
        }
            //step4:- revert changes done in step 2
        originalNode = head;
        cloneHead = cloneHead;
        while(originalNode!=NULL && cloneHead!=NULL){
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;
            if(originalNode!=NULL){
                cloneNode->next = originalNode->next;
            }
            cloneNode = cloneNode->next;
        }


            // step 5:- return ans
            return cloneHead;
        }
}

