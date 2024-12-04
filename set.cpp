#include <bits/stdc++.h>
using namespace std;

void print(set<string>&s){
    for(string value:s){
        cout<<value<<endl;
    }
    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<(*it)<<endl;
    // }
}
int main(){
    set<string>s;//sorted order+unique element ko store karta hai 
    s.insert("abc");//0(N)
    s.insert("sdhu");
    s.insert("jguy");
    auto it=s.find("abc");
    // if(it!=s.end()){
    //     cout<<(*it);
    // }

    if(it!=s.end()){
        s.erase(it);
    }
    print(s);


    //given N strings,print unique strings in lexiogtaphical order
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     string str;
    //     cin>>str;
    //     s.insert(str);
    // }
    // for(auto value:s){
    //     cout<<value<<endl;
    // }

    unordered_set<string>p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        p.insert(str);
    }
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(p.find(str)==p.end()){
            cout<<"no\n";
        }
        else{
            cout<<"yes";
        }
    }
}