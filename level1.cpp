
/*
bool isSorted(int *arr, int size){
    if(size==0 || size ==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr+1,size-1);
    }
}


int sum(int *arr,int size){
    if(size==1 || size == 0){
        return arr[0];
    }
    else{
        return (arr[0]+sum(arr+1,size-1));
    }
}
*/

// Found / Not found

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



    /*
    
    bool ans =isSorted(arr,size);
//question 1 :- to check if array is is_sorted
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else
        cout<<"array is not sorted" << endl;

    cout<<"The sum of elements of array is :"<<Sum<<endl;
    */
    /*
    bool ans =isSorted(arr,size);
//question 1 :- to check if array is is_sorted
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else
        cout<<"array is not sorted" << endl;

    cout<<"The sum of elements of array is :"<<Sum<<endl;
    */