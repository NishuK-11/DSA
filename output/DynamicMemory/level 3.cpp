#include <iostream>
using namespace std;
int main(){
    int row ;
    cin>> row;

    int col ;
    cin>> col;
    //creating a 2D array
    int **arr = new int *[row];
    for(int i=0; i<row ; i++){
        arr[i]=new int[col];
    }
    // taking input3
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    //showing output
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing memeory
    for(int i =0; i< row;i++){
        delete [] arr[i];
    }
    delete []arr;


}