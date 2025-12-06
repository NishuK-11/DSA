#include <iostream>
#include <cstring> // For strcpy
using namespace std;
class Hero{

private:
int health;

public:
char level;
char *name;

Hero(){
    cout<<"simple constructor called"<<endl;
    name = new char[100];
}
//parametrised constructor
    // this keyword --> cuurent object ka address "this" me hota hai
Hero(int health){
    cout<<"this ->"<<this<<endl;
    this -> health = health;
}
// Hero(Hero& temp){
//     cout<<"copy constructor called"<<endl;
//     this->health = temp.health;
//     this->level = temp.level;
// }
Hero(int health,char level){
    this -> level = level;
    this -> health = health;
}
void print(){
    cout<<"health is"<<this->health<<endl;
    cout<<"level is"<<this->level<<endl;
    cout<<"name is"<<this->name<<endl;
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

   //DEEP COPY
   Hero(Hero& temp){
    char *ch = new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name = ch;

    cout<<"copy constructor called"<<endl;
    this->health = temp.health;
    this->level = temp.level;
   }

};

int main(){
    Hero hero1;
    hero1.sethealth(12) ;
    hero1.setlevel('D');
    char name[7]="nishu";
    hero1.setname(name);
    hero1.print();

    //use default copy constructor -- khud ka bnaya hua hatao pehle
    Hero hero2(hero1);
    //Hero hero2 = hero1;
    hero2.print();
    //Hero hero2 = hero;
    //change the name of hero1;
    hero1.name[4]='a';
    hero1.print();

    hero2.print();//kyunki name ka pointer tha isiliye ab her01 & hero2 dono ka nam nisha ho jayega
    hero1 = hero2;//copy assignment operator
    hero1.print();
    //SHALLOW COPY --> same memory mein 
    /*
    Hero Suresh;
    Suresh.sethealth(69);
    Suresh.setlevel('c');
    cout<<"health is:-"<<Suresh.gethealth();
    cout<<endl;
    Suresh.print();
    cout<<endl;
    //Copy constructor
    Hero R(Suresh);
    R.print();

    */
    //object created statically valling constructor

    //Hero tt;// jab hmlog khud ka constructor likh denge to default constructor jo bnta hai wo nhi bnega--> ERROR
/*
 Hero ramesh(10);
    cout<<"Address of ramesh"<<&ramesh<<endl;
    ramesh.print();
    ramesh.gethealth();
    cout<<endl;
    //dynamically calling constructor
    Hero *h = new Hero(11);
    h->print();
    cout<<"Address of h"<<&h<<endl;
    cout<<endl;
    Hero temp(22,'B');
    temp.print();
    cout<<"Address of temp"<<&temp<<endl;
    cout<<endl;
*/
   
    /*this stores address of current obj
    this ->0x62fef4
Address of ramesh0x62fef4
constructor called
    */

}
