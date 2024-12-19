//Destructor -> to dealocate the memory
#include <iostream>
#include <cstring> // For strcpy
using namespace std;

class Hero{

private:
int health;

public:
char level;
char *name;
static int timetocomplete;
//static keyword -> aisa data member hai jo belong to class -> access karne ke liye object bnane ki need nhi hoti
static int random(){
    return timetocomplete;
}
    int gethealth(){
    return health;
   }
   char getlevel(){
    return level;
   }

   void sethealth(int h){
    health = h;
   }

   void setlevel(char ch){
    level = ch;
   }
   void setname(char name[]){
    strcpy(this->name,name);
   }
   
    ~Hero(){
        cout<<"destructor bhai called"<<endl;
    }

};
int Hero :: timetocomplete = 5;//initialise the static 
//::(scope resolution operator)
int main(){
    cout<<Hero::random()<<endl;
    cout << "Time to complete: " << Hero::timetocomplete << endl;
    // Hero a;
    // cout<<a.timetocomplete <<endl;
    // Hero b;
    // b.timetocomplete=10;
    // cout<<a.timetocomplete<<endl;
    // cout<<b.timetocomplete<<endl;


// //STATIC FUNCTIONS:-
// 1.object create karne ki jaroorat nhi hai 
// 2. this(pointer to current object) keyword nhi hota hai
//3. static member ko hi access kar sakte hain




// main se bahar jaane se pehle jitni memeory li thi use hta dena
// static way
// Hero a;
// //dynamic way
// Hero *b = new Hero();

//Destructor likhna seekho
//jo bhi object static allocation se create hota hai uske liye destructor automatically call hota hai,
// dynamic allocation wake ke liye manually call karna padta hai

//manually
// delete b;
}