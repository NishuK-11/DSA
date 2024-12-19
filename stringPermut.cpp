/*
#include <iostream>
#include <vector>
using namespace std;
void Swap(string str,int index,int length,vector<vector<string>>&ans){
    vector<string>tempResult;

    if (index == str.size() - 1) {
        tempResult.push_back(str); // Add the fully permuted string to the result
        ans.push_back(tempResult);
    }

    for (int i = 0; i < length && (index + i + 1) < str.size(); i++) {
        swap(str[index],str[index+i+1]);
        tempResult.push_back(str);
        swap(str[index],str[index+i+1]);
    }
    ans.push_back(tempResult);
}
int main(){
    string str = "abcd";
    int length = str.length();
    int index=0;
    vector<vector<string>>ans;

    while(index<length){
        int len = length-index;
        Swap(str , index ,len, ans);
        index++;
    }

    for (const auto& innerVec : ans) {           // Loop through each inner vector
        for (const auto& str : innerVec) {       // Loop through each string in the inner vector
                cout << str << " ";             // Print each string
                }                // Print a new line after each inner vector
    }
    return 0;
}

class Solution{
    public:
    void solve(vector<int>nums,vector<vector<int>>&ans,int index){
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=index;j<=nums.size();j++){
            swap(nums[index],nums[j]);
            solve(nums,ans,index+1);
            //backtrack
            swap(nums[index],nums[j]);
        }
    }
        vector<vector<int>>permute(vector<int>&nums){
            vector<vector<int>ans;
            int index = 0;
            solve(nums,ans,index);
            return ans;
        }
}


*/

#include <iostream>
#include <vector>
using namespace std;

void generatePermutations(string str, int index, vector<string>& ans) {
    if (index == str.size() - 1) {
        ans.push_back(str); // Add the fully permuted string to the result
        return;
    }

    for (int i = index; i < str.size(); i++) {
        swap(str[index], str[i]);               // Swap the current index with i
        generatePermutations(str, index + 1, ans); // Recursively generate permutations for the rest of the string
        swap(str[index], str[i]);               // Backtrack to the original string
    }
}

int main() {
    string str = "abcd";
    vector<string> ans;

    generatePermutations(str, 0, ans);

    // Print all permutations
    for (const auto& perm : ans) {
        cout << perm << " ";
    }
    cout << endl;

    return 0;
}










