
#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element into a sorted stack
void sortedInsert(stack<int>& stack, int num) {
    // Base case: if the stack is empty or the top element is smaller than or equal to num
    if (stack.empty() || stack.top() <= num) {
        stack.push(num);
        return;
    }

    // Store the top element and pop it
    int n = stack.top();
    stack.pop();

    // Recursive call to insert num in the sorted stack
    sortedInsert(stack, num);

    // Push the stored element back
    stack.push(n);
}

// Function to sort a stack using recursion
void sortStack(stack<int>& stack) {
    // Base case: if the stack is empty
    if (stack.empty()) {
        return;
    }

    // Remove the top element
    int num = stack.top();
    stack.pop();

    // Recursive call to sort the remaining stack
    sortStack(stack);

    // Insert the removed element in sorted order
    sortedInsert(stack, num);
}

int main() {
    // Create a stack and push elements
    stack<int> s;
    s.push(3);
    s.push(1);
    s.push(4);
    s.push(2);

    // Print the original stack
    cout << "Original stack (top to bottom): ";
    stack<int> temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Sort the stack
    sortStack(s);

    // Print the sorted stack
    cout << "Sorted stack (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}


