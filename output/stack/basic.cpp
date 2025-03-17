#include <iostream>
using namespace std;

class Stack {  // Renamed the class to avoid conflict with std::stack
    // Properties
public:
    int* arr;
    int top;
    int size;

    // Constructor
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // Push an element onto the stack
    void push(int element) {
        if (size - top > 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    // Pop an element from the stack
    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack Underflow" << endl;
        }
    }

    // Peek the top element of the stack
    int peek() {
        if (top >= 0) {
            return arr[top];
        } 
        else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    // Create a stack with a capacity of 5
    Stack st(5);

    // Push elements onto the stack
    st.push(22);
    st.push(56);
    st.push(12);

    // Peek the top element
    cout << "Top element: " << st.peek() << endl;

    // Pop the top element
    st.pop();
    cout << "Top element after pop: " << st.peek() << endl;

    return 0;
}

    //push
    // s.push(2);
    // s.push(3);
    //pop
    // s.pop();
    // cout<<"printing top element"<<s.top()<<endl;
    // if(s.empty()){
    //     cout<<"stack is empty"<<endl;
    // }
    // else{
    //     cout<<"stack is not empty"<<endl;
    // }
    // cout<<"size is"<<s.size()<<endl;