//Full Encapsulation
// #include <iostream>
// using namespace std;
// class Student{
//     private:
//         string name;
//         int age;
//         int height;
//     public:
//         int getAge(){
//             return this->age;
//         }
// };
// int main(){
//     Student first;
//     cout<<"all good"<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    private:
    int age;
    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
         this->weight=w;
    }
};

class Male: private Human{
    public:
    string color;
    void read(){
        cout<<"reading now"<<endl;
    }
    int getHealth(){
        return this->height;
    }
};

int main(){

    Male object1;
    cout<<object1.height<<endl;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    object1.read();
    object1.setWeight(85);
    cout<<object1.weight<<endl;
    
//MODE OF INHERITANCE:-

    return 0;
}