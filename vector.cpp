#include <bits/stdc++.h>
using namespace std;

// void printVec(vector<int>v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
// }
//     v.push_back(2);//it will have no effect as a copy is made 
//     // if you pass v ---> copy--->changes pta nhi chalega
//     //&v-->reference is passed(no copy but actual vector is passed)---->changes pta chalenge
//     cout<<endl;
// }

void printVec(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
}
    v.push_back(2);//it will have no effect as a copy is made 
    // if you pass v ---> copy--->changes pta nhi chalega
    //&v-->reference is passed(no copy but actual vector is passed)---->changes pta chalenge
    cout<<endl;
}

void printString(vector<string>&p){
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
int main(){
//     //int a[10];
//     vector<int>v;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>> x;
//          v.push_back(x);
//     }
//     printVec(v);

//}

    vector<int>v;
    v.push_back(7);
    v.push_back(6);
    // vector<int> v2=v;//0(n)
    vector<int> &v2=v;//0(n)//copy nhi hai, actual vector any change will reflect in both v and v2
    v2.push_back(5);
    printVec(v);
    printVec(v);
    printVec(v2);

    vector<string>p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        p.push_back(s);
    }
    printString(p);
}