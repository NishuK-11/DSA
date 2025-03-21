#include<iostream>
using namespace std;

int partition (int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i = s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //place pivit at right position
    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);

    ///left and right wala part sambhal lete hain--> left wale <a and right wale >a
    int i = s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j> pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;

}

void quickSort(int arr[],int s,int e){
    //base case
    if(s>=e)
        return;

    //partition karenge --> ek index mil jayega
    int p = partition(arr,s,e);

    //left part sort karo
    quickSort(arr,s,p-1);

    //right wala part sort karo
    quickSort(arr,p+1,e);
}

int main(){
    int arr[5]={2,4,1,6,9};
    int n = 5 ;
    quickSort(arr,0,n-1);
    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}