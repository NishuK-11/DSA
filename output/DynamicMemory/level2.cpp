#include <iostream>
using namespace std;

int getSum(int *arr,int n){
    int sum=0;
    for(int i =0; i< n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    //Bad Practice:-
    /*
    int n ;
    cin>>n;
    int arr[n];-->ru time pe size pta lg rha hai, hamein ye compile time par pta hona chahiye

    program start--> meemory leke aata hai(stack wali)
    1. stack memory(chhoti)
    2. heap memory(badi)
    */

   /*
   Runtime pe agar bnana ho to -> use heap memory
   use "new" keyword

   new char;--> can't assign name
   char *ch =new char;
   //ch is in stack  and  new char is in heap(9 byte game--> pointer 8  + char 1)

   */

  char ch = 'q';
  cout<<sizeof(ch)<<endl;//1
  char *c= &ch;
  cout<<sizeof(c)<<endl;//8
/*
int *i = new int;---> total 8+4=12 byte
int *arr =  new int[5]; --> total 8+20=s8 byyte
jo memory satck par allocate hoti hai -> static 
jo memeory heap pe allocate hoti hai -> dynamic 

*/
int n;
cin>>n;
int *arr = new int[n];
for(int i =0 ; i< n ; i++){
    cin>>arr[i];
}
int ans = getSum(arr,n);
cout<<"answer is"<< ans<<endl;
return 0;

/*
static                                                         Dynamic
int arr[50] --> 200 bytes                        int *arr = new int[50];--> 8yte + 50*4 = 208 byte
memory automatically cleans                      manually karna padta hai using delete keyword
*/


//CASE 1:-
while(true){
    int i = 5; //har instant ke liye ek hi memory li hui hai kyunki curly braces ke bahar memory release ho jati hai 
}

//CASE 2:-
while(true){
    int *ptr = new int;// stack wali (pointer) ki memory to release/free ho rhi hai par , new int (dynamic memory ) 
    //wali toh ikatthi hoti j arhi hai(4+4+....)--> program crash
    //delete i -> single element delete
    //delete [] arr -> to delete array
}


}