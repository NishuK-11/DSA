#include <bits/stdc++.h>
using namespace std;
int main(){
    string s="";int N;
    cout<<"enter the length of string"<<endl;
    cin>>N;char c;
    for(int i = 0;i<N;i++){
        cin>>c;
        s = s+c;
    }
    cout<<"your entered string is "<<s<<endl;
}
