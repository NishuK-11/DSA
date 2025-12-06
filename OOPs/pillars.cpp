

// #include <iostream>
// using namespace std;
// class Animal{
//     public:
//     int age;
//     int weight;

//     public:
//     void speak(){
//         cout<<"speeking "<<endl;
//     }
// };

// class Dog: public Animal{

// };

// class GermaSpherd:public Dog{

// };
// int main(){
//     GermaSpherd g;;
//     g.speak();
// }

// #include <iostream>
// using namespace std;
// class Animal{
//     public:
//     int age;
//     int weight;

//     public:
//     void bark(){
//         cout<<"barking "<<endl;
//     }
// };

// class Human{
//     public:
//     string color;

//     public:
//     void speak(){
//         cout<<"Speaking "<<endl;
//     }

// };
// //multiple inheritance
// class Hybrid: public Animal,public Human{

// };
// int main(){
//     Hybrid obj1;
//     obj1.speak();
//     obj1.bark();
// }

//Heirarchial inheritance
//one class serve as parent class for more than one class


// #include <iostream>
// using namespace std;
// class A{

//     public:
//     void func1(){
//         cout<<"barking "<<endl;
//     }
// };

// class B:public A{

//     public:
//     void func2(){
//         cout<<"Speaking "<<endl;
//     }
// };
// class C:public A{
//     public:
//     void func3(){
//         cout<<"Speaking "<<endl;
//     }
// };


// int main(){
//     A obj1;
//     obj1.func1();
// }



#include <iostream>
using namespace std;

class A {
public:
    void func() {
        cout << "barking" << endl;
    }
};

class B : public A { 
public:
    void func() {
        cout << "Speaking" << endl;
    }
};

class C : public  A, public B { 
};

int main() {
    C obj;
    obj.B::func();
    return 0;
}