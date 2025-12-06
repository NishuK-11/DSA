//n*(n+1) - sumof(array) = missing number

#include <iostream>
#include <climits>

using namespace std;
int missing(int arr[],int n){
    int sum=(n*(n+1))/2;
    for(int i = 0;i<n-1;i++){
        sum-=arr[i];
    }
    return sum;
}
int main(){
    int arr[5]={1,2,3,4,6};
    int miss = missing(arr,6);
    cout<<miss;
}