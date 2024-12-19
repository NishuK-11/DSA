class Solution{
    Node* SortInsert(Node* head,int key){
        Node newNode = new Node(key);
        Node prev = null;
        Node temp = head;
        while(temp!=null){
            if(temp->data >= key){
                break;
            }
            prev = temp;
            temp = temp->next;
        }

        if(prev == null){
            newNode->next = head;
            head = newNode;
        }
        else{
            newNode->next = prev->next
            prev->next = newNode;
        }
        return head;
    }
}


