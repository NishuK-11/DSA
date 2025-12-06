// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         map<int, int> mp;
//         for (int i = 0; i < n; i++) {
//             int remaining = target - nums[i];
//             if (mp.find(remaining) != mp.end()) {
//                 return { mp[remaining], i };
//             }
//             mp[nums[i]] = i;
//         }
//         return {};
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {2, 3, 4, 6, 1, 6};
//     vector<int> result = sol.twoSum(nums, 10);

//     if (!result.empty()) {
//         cout << "Indices: " << result[0] << ", " << result[1] << endl;
//     } else {
//         cout << "No solution found." << endl;
//     }

//     return 0;
// }

// int main(){
//     int n,sum;
//     cout<<"enter the number of element ";//6
//     cin>>n;
//     int a[n];
//     cout<<"enter the element ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];//7,8,6,3,2,9
//     }
//     cout<<"enter the sum of element ";
//     cin>>sum;//8
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]+a[j]==sum){
//                 cout<<i<<" "<<j<<endl;
//                 break;
//             }
//         }
//     }
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int n = numbers.size();
//         int i = 0;
//         int j = n - 1;
        
//         while (i < j) {
//             int sum = numbers[i] + numbers[j];
//             if (sum < target) {
//                 i++; // Move the left pointer to the right
//             } else if (sum > target) {
//                 j--; // Move the right pointer to the left
//             } else {
//                 return {i + 1, j + 1}; // Return 1-based indices
//             }
//         }
//         return {}; // Return an empty vector if no solution
//     }
// };

// int main() {
//     vector<int> p;
//     int n;
    
//     cout << "Enter the number of elements: ";
//     cin >> n;
    
//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++) {
//         int s;
//         cin >> s;
//         p.push_back(s);
//     }

//     cout << "Enter target: ";
//     int target;
//     cin >> target;

//     Solution sol;
//     vector<int> result = sol.twoSum(p, target);

//     if (!result.empty()) {
//         cout << "Indices: " << result[0] << ", " << result[1] << endl;
//     } else {
//         cout << "No solution found." << endl;
//     }

//     return 0;
// }
 #include <bits/stdc++.h>
 using namespace std;
 int main(){
    int n,num;
    cout<<"Enter the number of numbers";
    cin>>n;
    cout<<"enter the target";
    cin>>num;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==num){
                cout<<i+1<<" "<<j+1;
                break;
            }
        }
    }
 }

