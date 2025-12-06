#include <bits/stdc++.h>
using namespace std;
// int sumSquare(int n){
//     if(n<1){
//         return 0;
//     }
//     return n*n+sumSquare(n-1);
// } 
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<sumSquare(n);
    int a[]={45,23,12,56,78};
    for(int i=0;i<sizeof(a);i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            k=a[j-1];
            a[j-1]=a[j];
            a[j]=k;
            j--;
        }
    }
    for(int i=0;i<sizeof(a);i++){
        cout<<a[i];
    }
    cout<<endl;
}
