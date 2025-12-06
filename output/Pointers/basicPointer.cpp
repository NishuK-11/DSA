#include <iostream>
using namespace std;
int main(){
    int num = 5;
    cout << num << endl;
    int *ptr = &num;
    cout <<" address of num is using &num is "<< &num << endl;
    cout <<" address of num is using ptr is "<< ptr << endl;
    
    double d = 4.2;
    double *p2 = &d;
    
    cout<< "value is using ptr " <<*ptr<<endl;
    cout<<"size of integer is "<< sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;
}