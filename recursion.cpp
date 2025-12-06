#include <bits/stdc++.h>
using namespace std;
void name(int n){
    if(n<=0){
        return;
    }
    else{
        cout<<"nishu"<<endl;
        name(n-1);
    }
    
}
// Sum of first n numbers //FUNCTIONAL
    int sum(int i,int n){
        if(i>n){
            return 0;
        }
        return (i+sum(i+1,n));
    }
   //sir:-

   void Sum(int i,int sum){//PARAMETRISED WAY
    if(i<1){
        cout<<sum;
        return;
    }
    Sum(i-1,sum+i);
   }
   int SUm(int n)
   {
    if(n==0){
        return 0;
    }
    return n+SUm(n-1);
   } 
void Name(int i,string str,int n){
    if(i>n)
        return;
    cout<<str<<endl;
    Name(i+1,str,n);
}

int main(){
    //print name n times
    string str;
  
    cout<<"enter name";
    cin>>str;
    int n;
    cout<<"enter the number of times names has to be printed"<<endl;
    cin>>n;
    Name(1,str,n);
    name(n);
    cout<<sum(1,n);
    Sum(n,0);
    SUm(n);
}
    