#include <bits/stdc++.h>
using namespace std;
struct node{//in it itself datatype
    string str;
    int num;
    double doub;
    char x;

    node(str_,num_,doub_,x_){
        str=str_;
        num=num_;
        doub=doub_;
        x=x_;
    }
};
//wrong way of definig  ctrl+/
// node raj;
// raj.str="Nishu";
// raj.num=79;
// raj.doub=91.0;
node raj=new node("striver",79,91.0,"");

namespace nishu{
    int v=35;
    int t=70;
    int getValue(){
        return t;
    }
}
array<int,4>arr;//{?,?,?,?}
array<int,5>arr={1,5,6};//{1,5,6,0,0}
array<int,5>arr;
arr.fill(10);//{10,10,10,10,10}
arr.at(index);
for(int i=0;i<5;i++){
    cout<<arr.at(i)<<" ";
}
//iterators//  21,45,67,89,54,34
//begin=21,  end(right after end)=,  rbegin()=34,rend(right before start)
array<int,5>arr;
for(int i=0;i<5;i++){
    cout<<arr.at(i)<<" ";
}
array<int,5> arr={1,3,4,5,6};
//auto= automatically takes data type
for (auto it:arr.begin();it!=arr.end();it++){
    cout<<*it<<" ";
}
for (auto it:arr.end();it>=arr.begin();it--){
    cout<<*it<<" ";
}//it is reverse iterator it will automaticaly traverse from right to left-->print 6,5,4,3,1
for(auto it : arr){
    cout<<it<<" ";
}
string s="jhgyfvlvgzf"
for(auto c:s){
    cout<<c<<" ";
}
cout<<arr.front();//arr.at(0)
cout<<arr.back();//arr.at(arr.size()-1)
cout<<arr.size();
int main(){
    int v=40;
    cout<<v;
    cout<<nishu::getValue()<<endl;
}