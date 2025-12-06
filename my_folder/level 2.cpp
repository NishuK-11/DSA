#include <iostream>
using namespace std;
int main(){
    //int *p  ->pointer to int is created and pointing to some garbage address
    // int *p ;
    // cout << *p <<endl;
    // return 0;

    //int *p =0;//null pointer ---> give segmentation fault
    //cout<<*p<<endl;

    //initialisation
    int i = 5;
    // int *p = 0;
    // p = &i;
    // cout<< p << endl;
    // cout<<*p <<endl;

    
    int num = 5;
    int a = num;
    a++;
    cout<< "a before"<<num<<endl;
    cout<< "a after"<<num<<endl;
     
    int *p = &num;
    cout<<"before "<<num <<endl;
    (*p)++;
    cout << "after" << num << endl;


    //copy one pointer to other
    int *q =p;
    cout<<p<<" - "<< q <<endl;
    cout<<*p<<" - "<< *q <<endl; 

    //Important Concept
    int *t = &i;
    *t=*t+1;
    cout<<(*t)++<<endl;
    cout<<t<<endl;//let address be 100
    cout<<t+1<<endl;//adress mow is 104
}