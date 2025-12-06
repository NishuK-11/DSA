//pair with sum=6
//a+b=sum
//b=sum-a

#include <iostream>
#include <vector>
#include <map>
using namespace std;
int countPairs(vector<int> arr, int sum){
    map<int,int> mp;
    int count = 0;

    for(int x : arr)
        mp[x]++;

    for(int i = 0; i < arr.size(); i++){
        int toFind = sum - arr[i];

        mp[arr[i]]--;   // remove current first

        if(mp[toFind] > 0)
            count++;
    }

    return count;
}

int main(){
    vector<int>arr = {3,4,2,1,3};
    int sum = 6;
    cout << countPairs(arr, sum);
}