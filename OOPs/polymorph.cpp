
// //FUNCTION OVERLOADING 
// #include <iostream>
// using namespace std;
// class A{
// public:
//     void sayhello(){
//         cout<<"hello love babbar"<<endl;
//     }

//     int sayhello(char name){
//         cout<<"Hello love babbar"<<endl;
    
//     }

//     int sayhello(string name,int n){
//         cout<<"Hello love babbar"<<endl;
//         return n;
//     }

// };
// int main(){
//     A obj;
//     obj.sayhello();
// }

//OPERATOR OVERLOADING :-
//+ -> 2 int value ko subtract karen
#include <iostream>
using namespace std;
// class B{
//     public:
//     int a;
//     int b;
//     public:
//     int add(){
//         return a+b;
//     }
//     void operator +(B &obj){
//         int value1 = this->a;
//         int value2=obj.a;
//         cout<<"output"<<value2-value1<<endl;
//     }
//     void operator() (){
//         cout<<"main bracket hoon"<<this->a<<endl;
//     }
// };

// int main(){
//     B obj1,obj2;
//     obj1.a=4;
//     obj2.a = 7;
//     obj1+obj2;
//     obj1();
// }

//Run -Time Polymorphism -> dynamic polymorphism (method overriding)

class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }

};
class Dog: public Animal{
    public:
    // void speak(){
    //     cout<<"barking"<<endl;
    // }
};
int main(){
    Dog obj;
    obj.speak();
}
