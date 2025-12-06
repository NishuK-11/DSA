
Node* merge(Node* left, node*right){
    if(left == NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }

    Node* ans = new Node(-1);
    Node* temp = ans;
    //merge two sorted ll
    while(left!=NULL && right!=NULL){
        if(left->data<right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next =right;
            temp =right;
            right= right->next;
        }
    }
    while(left!=NULL){
        tem->next = left;
        temp = left;
        left = left->next;

    }
    while(right!=NULL){
        tem->next = right;
        temp = right;
        right = right->next;

    }
    ans=ans->next;
    return ans;
}



Node* findMerge(Node* head){
    Node*slow = head;
    Node* fast = head->next;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

   }
    return slow;
}

Node* mergeSort(Node* head){
    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    //break ll into two halves after finding mid
    Node*mid =  findMid(head);
    Node* right = mid->next;
    mid->next = NULL;
    //recursive call to sort both half
    left = mergeSort(left);
    right = mergeSort(right);
    //merge both half
    Node*
}