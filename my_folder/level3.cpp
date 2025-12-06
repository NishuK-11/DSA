#include <iostream>
using namespace std;
int main(){

    // int arr[10]={2,5,6,8};
    // cout << "address of first memeory block is "<< arr << endl;
    // cout << " address of first memory block is "<<&arr[0]<<endl;

    // cout << "4th"<<*arr <<endl;
    // cout<<"5th"<<*arr+1 <<endl;
    // cout<<"5th"<<*(arr+1) <<endl;

    //arr[i] = *(arr+i)
    //i[arr] = *(i+arr)
    
    //size = no of block * 4
    // int i =3;
    // cout<<i[arr]<<endl;

    // int temp[10];
    // cout << sizeof(temp)<<endl;
    // int *ptr = &temp[0];
    // cout<< sizeof(ptr)<<endl;
    // cout<< sizeof(*ptr)<<endl;
    // cout<< sizeof(&ptr)<<endl;
    // cout<<"1st"<<sizeof(*temp)<<endl;
    // cout<<"2nd"<<sizeof(&temp)<<endl;

    int a[20]={1,2,3,4};
    cout<<&a[0]<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;

    int *p=& a[0];
    cout<< p << endl;
    cout << *p <<endl;
    cout<<&p<<endl;

    //symbol table content cannot be changed


    // error :- arr = arr+1
    int *ptr = &a[0];
    cout << ptr << endl;
    ptr = ptr +1;
    cout << ptr  <<endl;

    //character array
    char ch[6]={"abcde"};
}