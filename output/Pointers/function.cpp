#include <iostream>
using namespace std;

void print(int *p){
    cout<< *p <<endl;
}

void update( int *p){

    //P=P+1;-->DO not impact in main block
    *p=*p+1;//--> Do change the  value at main block also
}

int getSum(int arr[], int n){//jab humlog array pass karte hain to actual me pointer pass hota hai ,  here a[]=*arr
//int getSum(int *arr, int n){
    cout <<"size :"<<sizeof(arr)<<endl;// gives size of pointer as 4
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    /*
    int value = 5;
    int *p = &value;
    //print(p);
    cout<<"Before "<<*p<<endl;
    update(p);
    cout<<"After "<<*p<<endl;
    */
    


    int arr[6]={1,2,3,4,5,6};
    //cout<<"Sum is"<<getSum(arr,5)<<endl;
    cout<<"Sum is"<<getSum(arr+3,3)<<endl;//arr+3 3 se bhejega 4,5

} 