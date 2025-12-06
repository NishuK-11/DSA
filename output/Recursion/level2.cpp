/*
#include <bits/stdc++.h>
using namespace std;

bool elementPresent(int *arr, int size, int target) {
    if (size == 0) { // base case: end of array
        return false;
    }
    if (arr[0] == target) { // base case: target found
        return true;
    }
    
    else{
        bool remainingPart = elementPresent(arr+1,size-1,target);
        return remainingPart;
    }
}
int main() {
    int arr[5] = {5, 7, 8, 9, 3};
    int size = 5;
    int target = 9;

    bool Found_or_not = elementPresent(arr, size, target);

    if (Found_or_not) {
        cout << "Element is found" << endl;
    } else {
        cout << "Element is not found" << endl;
    }

    return 0;
}
*/



#include<iostream>
using namespace std;

bool binarySearch(int *arr,int s , int e, int k){
    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    } 
}
int main(){
    int arr[6]={2,4,6,10,14,16};
    int size = 6;
    int key = 96;
    cout<<"present or not "<<binarySearch(arr,0,5,key);
    return 0;
}
