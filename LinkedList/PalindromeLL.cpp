

// 1. create an __ARRAY_OPERATORS
// 2. copy kar do LL ke content ko
// 3. write logic to check palindrome
#include<vector>
class Solution{
    private:
        bool checkPalindrome(vector<int>arr){
            int n = arr.size();
            for(int i = 0 ;i<n/2;i++){
                if(arr[i]!=arr[n-i-1])
                    return false;
            }
            return true;
        }
    public:
        bool isPalindrome(Node* head){
            vector<int>arr;int c= 0;
            Node* temp = head;
            while(temp!=NULL){
                arr.push_back(temp->data);
                temp=temp->next;
            }
        }
        return checkPalibdrome(arr);
}


//Approach 2:-
// 1. Middle find kar lo
// 2. reverse kar do middle ke aage ki linked list ko

class Solution{
    private:
        Node* getMid(Node* head){
            Node* slow = head;
            Node* fast = head->next;

            while(fast!=NULL && fast->next!=NULL){
                fast = fast->next->next;
                slow = slow->next;
            }
            return slow;
        }

        Node* reverse(Node* head){
            Node* curr = head;
            Node* prev = NULL;
            Node* next = null;
            while(curr!=NULL){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            return prev;
        }
        public:
            bool isPalindrome(Node* head){
                if(head->next == NULL){
                    return true;
                }
                //step1 -> find middle
                Node* middle = getMid(head);

                //step 2-> reverse list after middle
                Node* temp = middle->next;
                middle->next = reverse(temp);

                //step 3:- comparare both half
                Node* head1 = head;
                Node* head2 = middle->next;
                while(head2!=NULL){
                    if(head1->data!=head2->data){
                        return false; 
                    }
                    head1 = head1->next;
                    head2 = head2->next;
                }
                
                //step4:- repeate  step 2
                temp = middle->next;
                middle->next = reverse(temp);.

                return true;
            }
}














