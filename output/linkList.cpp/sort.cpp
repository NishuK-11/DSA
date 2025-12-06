//Sort Linked list of 0s 1s 2s
//Approach 1:-
Node* sortList(Node* head){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == 0){
            zeroCount++;
        }
        else if(temp->data == 1){
            oneCount++;
        }       
        else if(temp->data == 2){
            twoCount++;
        }
        temp = temp->next;
    }
    temp = head;
    while(temp!=NULL){
        if(zeroCount!=0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount!=0){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount!=0){
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;
}

//Approach 2:- data replacement is not allowed

void insertAtTail(Node* &tail,Node* curr){
    tail->next = curr;
    tail = curr;
}

Node* sortList(Node* head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* zeroTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* zeroTail = twoHead;
    //create separate list for 1 2 0
    while(curr!=NULL){

        int value = curr->data;
        if(value == 0){
            insertAtTail(zeroTail,curr);
        }
        else if(value == 1){
            insertAtTail(oneTail,curr);
        }
        else if(value == 2){
            insertAtTail(twoTail,curr);
        }
        curr = curr->next;
    }

    //merge list
    //1s list is not empty
    if(oneHead->next!=NULL){
        zeroTail->next = oneHead->next;
    }
    else{
        //1s list empty
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    //setup head
    head = zeroHead->next;

    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
}

//selection sort
Node* SelectionSort(Node* head){
    if(head== NULL || head->next == NULL){
        return head;
    }
    Node* curr = head;
   
    while(curr!=NULL){
        Node* minNode = curr;
        Node* temp = curr->next;
         //minimum of elements in the ll
        while(temp!=NULL){
            if(temp->data < minNode->data){
                    minNode = temp->data;
            }
        temp= temp->next;
        }
        if(minNode!=curr){
            swap(minNode->data,curr->data);
        }
        curr = curr->next;
    }
    return head;
}

