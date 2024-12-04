/*
#include <iostream>
using namespace std;
#define PI 3.14// no extra storage is taken
int main(){

//include -> preprocessor directive-> compile hone  se pehle file code mein copy kar di jayegi
//macros-> a piece of code in a program that is replaced by value of macro
int r=3;
int area = PI*r*r; 
/* This cannot be done
PI = PI +1;
cout<<PI<<endl;
*/
cout<<"area is "<<area<<endl;

}

//GLOBAL VARIABLES
#include <iostream>
using namespace std;
int score = 15;
int main(){
    //use mat kariyo -> bad practice--> koi bhi local variable isko change kar sakta hai , baaki sab mein bhi implement ho jayega

}
*/

//INLINE FUNCTIONS-> use to reduce the function call overhead
#include <iostream>
using namespace std;
void getMax(int &a, int &b){
    return (a>b)?a;b;
}
int main(){
    int a =1,b=2;
    int ans =0;
    ans = (a>b)?a:b;
    a+=3;
    b+=1;
    ans=getMax(a,b);
    cout<<ans<<endl;
    }
