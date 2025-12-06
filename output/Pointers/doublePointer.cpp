#include <iostream>
using namespace std;
int main(){
    int i =5;
    int *p = &i;
    int **p2 = &p;

    //both have same output
    cout<<"printing p "<<p<<endl;
    cout<<*p2<<endl;

    //all three will have same output
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<"printing address"<<&p<<endl;

    // all three will have same output
    cout <<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
 

}