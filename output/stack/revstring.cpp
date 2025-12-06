//stack => reverse string using stack
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    string str;
    string ans="";
    cout<<"enter a string";
    cin>>str;
    int l = str.length();
    stack<char>s;
    for(int i=0;i<l;i++){
        char c = str[i];
        s.push(c);
    }
    while(!s.empty()){
        char ch = s.top();
        ans += ch;
        s.pop();
    }
    cout<<ans<<endl;
}
