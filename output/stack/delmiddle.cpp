#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Recursive function to delete the middle element of the stack
void solve(stack<int>& inputStack, int count, int size) {
    // Base case: if we reach the middle, remove the element
    if (count == size / 2) {
        inputStack.pop();
        return;
    }

    // Store the top element and pop it
    int num = inputStack.top();
    inputStack.pop();

    // Recursive call to reach the middle
    solve(inputStack, count + 1, size);

    // Push the element back after recursion
    inputStack.push(num);
}

// Function to delete the middle element of the stack
void deleteMiddle(stack<int>& inputStack, int n) {
    int count = 0;
    solve(inputStack, count, n);
}

int main() {
    // Create a stack and push some elements
    stack<int> inputStack;
    inputStack.push(1);
    inputStack.push(2);
    inputStack.push(3);
    inputStack.push(4);
    inputStack.push(5);

    // Size of the stack
    int n = inputStack.size();

    // Delete the middle element
    deleteMiddle(inputStack, n);

    // Print the stack after deletion
    // cout << "Stack after deleting the middle element: ";
    // while (!inputStack.empty()) {
    //     cout << inputStack.top() << " ";
    //     inputStack.pop();
    // }


    vector<int> temp;
    while (!inputStack.empty()) {
        temp.push_back(inputStack.top());
        inputStack.pop();
    }

    // Push elements back into the stack and print them
    cout << "Stack after deleting the middle element: ";
    for (int i = temp.size() - 1; i >= 0; --i) {
        cout << temp[i] << " ";
        inputStack.push(temp[i]);
    }


    return 0;
}




