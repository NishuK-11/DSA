
#include <iostream>
#include <vector>
#include <map>

using namespace std;
bool subset(vector<int>&arr1,vector<int>arr2){
    int n = arr1.size(); int m = arr2.size();
    map<int,int>mp;
    for(int i = 0;i<n;i++){
        mp[arr1[i]]++;
    }
    for(auto i: arr2){
        if((mp.find(i) == mp.end()) || mp[i]==0){
            return false;
        }
        else{
            mp[i]--;
        }
    }
    return true;
}

int main() {
    vector<int> arr1 = {1, 2, 5, 8, 9};
    vector<int> arr2 = {5,8,9,7};

    bool result = subset(arr1, arr2);
    cout<<result;
}