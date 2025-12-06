// Bucket Sort :
// 1. works on floating point numbers betweeen range 0.0 to 1.0
// 2. Inputs  should be uniformaly and independently distributed across [0,1] to get a running time of 0(n)

#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

void bucketSort(vector<float>&arr){
    int n = arr.size();
    if(n<=1){
        return ;
    }
    //create empty bucket of vector<vector<int>> to store bucket+element inside it
    vector<vector<float>>bucket(n);
    //put array elements into different buckets
    for(int i = 0;i<n;i++){
        int BucketIndex = n*arr[i];
        bucket[BucketIndex].push_back(arr[i]);
    }
    //sorting individual buckets 
    for(int i = 0;i<n;i++){
        sort(bucket[i].begin(),bucket[i].end());
    }
    //conacatenate individual buckets 
    int index = 0;
    for(int i = 0;i<n;i++){
        for(float val:bucket[i]){
            arr[index++] = val;
        }
    }
}


int main(){
    vector<float> arr = {0.77,0.56,0.22,0.225,0.56,0.567};
    //printing original array
    for(float x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    //sorting the array using bucket sort
    bucketSort(arr);

    cout<<"sorted array"<<endl;
    for(float x:arr){
        cout<<x<<" ";
    }
}