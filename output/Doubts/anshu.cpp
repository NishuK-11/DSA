// #include <iostream>
// using namespace std;
// int fact(int n){
//     if(n==1 || n==0){
//         return n;
//     }
//     else{
//         return n*fact(n-1);
//     }
// }
// int further(int n,int p){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return p*further(n-1,p-1);
//     }

// }
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;int c= 1;int sum = 0;int count=0;
    for(int i = 1;i<=n;i++){
        for(int j=0;j<i;j++){
            count++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j = 0;j<i;j++){
            sum++;
        }
    }
    count=count+sum+1;int p=1;
    for(int  i =0;i<n;i++){
        for(int j = 0;j<i*2;j++){
            cout<<"-";
        }
        for(int j = 0;j<n-i;j++){
            cout<<c<<"*";
            c++;
        }
        for(int j = 0;j<n-i;j++){
            if(j==n-1){
                cout<<count;
            }
            cout<<count<<"*";
            count++;
        }
        
        count = count-2*(n-i-1)-1;
        cout<<endl;
        // p++;
    }
}

