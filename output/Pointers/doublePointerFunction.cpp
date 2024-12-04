#include <iostream>
using namespace std;
void update(int **p2){//p2 ka address naya banega-->pass by value hai
   // p2=p2+1;
    //kuchh change hoga?---->no

   //*p2 = *p2 +1;
    //kuchh change hoga?---->yes

    **p2 = **p2+1;
    //kuchh change hoga?
}
int main(){
    int i =5;
    int *p = &i;
    int **p2 = &p;

    cout << endl <<endl;
    cout<<"before"<<i<<endl;
    cout<<"before"<<p<<endl;
    cout<<"before"<<p2<<endl;
    update(p2);
    cout <<"after"<<i<<endl;
    cout<<"after"<<p<<endl;
    cout<<"after"<<p2<<endl;
    cout << endl <<endl;



}