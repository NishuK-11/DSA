#include <bits/stdc++.h>
using namespace std;
// void print(map<int,int>&m){
//         cout<<m.size()<<endl;
//         for(auto &pr : m){
//             cout<<pr.first<<" "<<pr.second<<endl;
//         }
//     }
    // int main(){
    //    map<int,string>m;
    // m[1]="abc";//0(log n)
    // m[5]="cdc";
//     m[3]="acd";
//     m.insert({4,"afg"});
//     map<int,string>::iterator it;
//     for(it=m.begin();it!=m.end();++it){
//         cout<<(*it).first<<" "<<(*it).second<<endl;

//     }

int main(){
    // map<int,int>m;
    // cout<<m.size()<<endl;
    // for(auto &pr : m){
    //     cout<<pr.first<< " "<<pr.second<<endl;
    // }
    //     m[6];
    //     print(m);  
    map<int,string>p;
    p[1]="abc";
    p[2]="cdc";
    p[3]="acd";
    p[6]="a";
    p[5]="cde";
    // auto it = m.find(3);
    // if(it == m.end()){
    //     cout<<"NO VALUE";
    // }
    // else{
    //     cout<<(*it).first<<" "<<(*it).second;
    // }

    auto it =p.find(7);
    if(it !=p.end())
        p.erase(it);
    print(m);
}