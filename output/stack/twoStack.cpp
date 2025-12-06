class TwoStack{
    int *arr;
    int top1;
    int top2;
    int size;
    public:
        //initialize twostack
        TwoStack(int s){
            this->size = s;
            top1 = -1;
            top2 = s;
            arr = new int[5];
        }
        //push in stack1
        void push1(int num){
            //atleast a empty space present
            if(top2-top1>1){
                top1++;
                arr[top1] = num;
            }
            else{
                cout<<"Stack OverFlow"<<endl;
            }
        }
        //push in stack2 
        void push2(int num){
            if(top2-top1>1){
                top2--;
                arr[top2]==num;
            }
            else{
                cout<<"Stack OverFlow"<<endl;
            }
        }
        //pop from stack1 and return popped element.
        int pop1(){
            if(top1>=0){
                int ans = arr[top1];
                top1--;
                return ans;
            }
            else{
                return -1;
            }
        }
}