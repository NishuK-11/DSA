#include <bits/stdc++.h>
using namespace std;
// SELECTION SORTING----> takes minimum out and swap
int main(){
    int arr[]={32,39,54,64,21};
    // int n=sizeof(arr);
    // cout<<n;
    int N=5,k;
    for(int i=0;i<N;i++){
        int min=arr[i];
        for(int j=i+1;j<N;j++){
            if(arr[j]<arr[i]){
                k=arr[j];
                arr[j]=arr[i];
                arr[i]=k;
            }
        }
    }
    for(int i=0;i<N;i++){
        cout<<arr[i];
    }
    cout<<endl;
    //BUBBLE SORT----->compare two and swap
    for(int i=0;i<N;i++){
        for(int j=0;j<N-1;j++){
                if(arr[i]>arr[i+1]){
                k=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=k;
            }
        }
    }
    for(int i=0;i<N;i++){
        cout<<arr[i];
    }
    cout<<endl;
    int a[]={45,23,12,56,78};
    //23,45,12,56,78
    //23,12,45,56,78
    //12,23,45,56,78

    //INSERTION SORT------->take an element and place it in its correct order
    for(int i=0;i<N;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            k=a[j-1];
            a[j-1]=a[j];
            a[j]=k;
            j--;
        }
    }
    for(int i=0;i<N;i++){
        cout<<a[i];
    }
    cout<<endl;

}
//   5,62,21,32,65

