#include<iostream>
using namespace std;
int main(){
    int n=3;
    int a[3][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"input matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int b[3][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][j]=a[2-j][i];
        }
    }
    cout<<"final matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}