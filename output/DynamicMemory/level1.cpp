#include <iostream>
using namespace std;
/*
//bad practice-->don't do
int & func(int a){
    int num = a;
    int & ans = num;
    return ans;
}
//all are local variable bahar mein dikkat dega ---> WARNING DEGA
int * func(int n){
    int *ptr = &n;
    return ptr;
}
*/
void update1(int n){
    n++;a
}

void update2(int &n){//reference variable
    n++;
}
int main(){

    /*
    int i =5;
    //create a reference variable 
    int &j = i;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    //WHY ?
    */
    int n=5;
    cout<<"before value :"<<n<<endl;
    //update1(n);
    update2(n);
    cout<<"after value :"<<n<<endl;
    //a(n)  and b(&n)--> Memory yahi par isko a aur b dono naam se bula sakte hain(memeory same naaam alag hai)



}