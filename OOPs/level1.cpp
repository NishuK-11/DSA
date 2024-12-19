#include <iostream>
//#include "Hero.cpp";
using namespace std;

class Hero{
    //properties
    //int health;
    //empty class ke case mein object ko 1 space de di jaati hai
    //access properties using '.' operator
    public:
    char name[100];
    // private:
    int health;
    public:
    char level='a';
    /*
    private:
    char star;
    void print(){
        cout<<star<<endl;
    }
    */
   int gethealth(){
    return health;
   }

   char getlevel(){
    return level;
   }

   void sethealth(int h){
    health = h;
   }

/*
    void sethealth(int h,int pswd){
    //jiska naam xyz hai wahi change kar paye
    if(name=="xyz"){
        health = h;
    }
   }
*/

   void setlevel(char ch){
    level = ch;
   }

};
int main(){

    Hero ramesh;



    //creation of object
    /*
    Hero nishu;
    nishu.sethealth(80);
    nishu.setlevel('B');
    cout<<"level is:"<<nishu.level<<endl;
    cout<<"health is :"<<nishu.gethealth()<<endl;
    //dynamically
    Hero *b = new Hero;
    b->setlevel('A');
    b->sethealth(70);
    cout<<"level is:"<<(*b).level<<endl;
    cout<<"health is :"<<(*b).gethealth()<<endl;

    cout<<"level is:"<<b->level<<endl;
    cout<<"health is :"<<b->gethealth()<<endl;
    */


    // nishu.health=70;
    // cout<<"size : "<<sizeof(nishu)<<endl;
    // cout<<"health is :"<<nishu.health<<endl;
    // cout<<"nishu health is "<<nishu.gethealth()<<endl;
    //use setter
    // nishu.sethealth(70);
    // cout<<"nishu health is "<<nishu.gethealth()<<endl;
    // cout<<"level is :"<<nishu.level<<endl;
    //cout<<"star is :"<<nishu.star<<endl;




    return 0;

}