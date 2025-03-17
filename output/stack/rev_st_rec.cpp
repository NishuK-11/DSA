#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element at the bottom of the stack
void insertAtBottom(stack<int>& s, int element) {
    // Base case: if the stack is empty, push the element
    if (s.empty()) {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    // Recursive call to reach the bottom of the stack
    insertAtBottom(s, element);

    // Push the top elements back after inserting at the bottom
    s.push(num);
}

// Function to reverse the stack
void reverseStack(stack<int>& stack) {
    // Base case: if the stack is empty, return
    if (stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop();

    // Recursive call to reverse the remaining stack
    reverseStack(stack);

    // Insert the current element at the bottom of the reversed stack
    insertAtBottom(stack, num);
}

int main() {
    // Create a stack and push some elements
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // Print the original stack
    cout << "Original stack (top to bottom): ";
    stack<int> temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Reverse the stack
    reverseStack(s);

    // Print the reversed stack
    cout << "Reversed stack (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}


//reverseStack==> is it because we firstly want to make it empty then insert at bottom at passing characters in reverse order