#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int countLessNumbers(stack<int> st, int check) {
    int count = 0;
    while (!st.empty()) {
        if (st.top() <= check) {
            count++;
        }
        st.pop();  // Pop from the copy of the stack
    }
    return count;
}

int main() {
    stack<int> st;
    st.push(100);
    st.push(80);
    st.push(60);
    st.push(70);
    st.push(75);
    st.push(85);

    vector<int> ans;
    stack<int> tempStack = st; // Creating a copy of the original stack

    while (!tempStack.empty()) {
        int toPush = countLessNumbers(tempStack, tempStack.top());  // Pass copy to the function
        ans.push_back(toPush);  // Store the result
        tempStack.pop();  // Pop from tempStack, original st remains intact
    }

    // Printing the result
    for (int i : ans) {
        cout << i << " ";
    }

    return 0;
}
