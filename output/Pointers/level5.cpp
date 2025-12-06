#include <iostream>
using namespace std;
int main(){
    char arr[5]= "1234";
    char *ptr = arr;//12345 print karega
    cout<<(void*)arr<<endl;//address of a print karega 
    cout<<(void*)ptr<<endl;//address print karega
    char name = 'a';
    char *ptr1 = & name;
    cout<<(void*)&name<<endl;
    cout<<(void*)ptr1;

    int num = 10;
    int *ptr;
    ptr = &num;
    

}