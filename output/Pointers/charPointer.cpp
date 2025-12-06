#include <iostream>
using namespace std;
int main(){
    //different implementation for integer and character array
     
    int arr[5]= {1,2,3,4,5};
    char ch[6]="abcde";
    cout<< arr << endl;//prints address
    cout<< ch<<endl;//prints abcde
    char *c = &ch[0];// prints entire string
    cout << c << endl;
    char temp = 'z';
    char *p=&temp;
    cout << p << endl;// jab tak null character nhi milega , print karte rahega

/*
char[6]="abcdf";
    1. temporary memory bn jayega abcd\0  2. memory bni hogi ch jisme temp copy hogi

    char *c ="abcde"  --> very risky / nhi karna hai
    1. temp memory bni 2. c usko point karega
*/


    



}