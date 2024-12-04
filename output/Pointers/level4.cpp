#include <iostream>
using namespace std;
int main(){
    int arr[5]={5,6,2,3,5};
    int *ptr = arr;
    //pritn the address of first element
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    //print the address of second element

    cout<<ptr+1<<endl;
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;

//print value at 0 index
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr<<endl;

    //Saare address print
    for(int i=0;i<5;i++){
        cout<<arr+i<<endl;
        // cout<<ptr+i<<endl;
    }

    
//Saare values print
    for(int i=0;i<5;i++){
        // cout<<arr+i<<endl;
        cout<<*(ptr+i)<<endl;
    }

    for(int i = 0;i<5;i++){
        cout<<*ptr;
        ptr++;
    }

}