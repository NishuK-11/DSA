//Merge two sorted linked list 

 


Node* solve(Node<int>* first,Node<int>* second){
    
//if only one lement is present in first list
    if(first->next == NULL){
        first->next = second;
    }
    Node* curr1 = first;
    Node* next1 = curr1->next;
    Node* curr2 = second;
    Node* next2 = curr2->next;
    
    while(next1!=NULL && curr2!=NULL){
        if((curr2->data >= curr1->data) && (curr2->data <= next1->data)){
            //add nodes in between the first list
            curr1->next = curr2;
            next2 = curr2->next;
        // update pointers
            curr1 = curr2;
            curr2 = next;
        }

        //curr1 and next1 ko aage badhana padega
        curr1 = next;
        next1 = next1->next;

        if(next1 == NULL){
            curr1->next = curr2;
        }
    }
    return first;
}






Node<int>* sortTwoList(Node<int>* first, Node<int>* second){
    if(first == NULL){
        return second;
    }
    if(second==NULL){
        return first;
    }

    if(first->data <= second->data){
        return solve(first,second);
    }
    else{
        return solve(second,first);
    }

}