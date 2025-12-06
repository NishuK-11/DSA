#include <bits/stdc++.h>
using namespace std;

string reverse(string S) {
    stack<char> st;
    
    // Push characters onto the stack
    for (char ch : S) {
        st.push(ch);
    }

    // Pop characters and store in reversed string
    string rev = "";
    while (!st.empty()) {
        rev += st.top();
        st.pop();
    }

    return rev;
}

int main() {
    string S = "GeeksforGeeks";
    cout << "Reversed String: " << reverse(S) << endl;
    return 0;
}
