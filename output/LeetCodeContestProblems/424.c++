#include <iostream>
using namespace std;
class Solution{
    public:
        int countValidSelections(vector<int>&nums)
        {
            int n = nums.size();
            vector<int> pre(n+1,0);
            for(int i = 1;i<=n;i++){
                pre[i]=pre[i-1] +nums[i-1];


                //ith index in a 1-based indexing , I have found the prefix sums
                int ans = 0;
                for(int i =1;i<=n;i++){
                    if(nums[i-1]==0)
                    {
                        int left_sum  = pre[i-1];
                        int right_sum = pre[n]-pre[i-1];
                        int diff = abs(left_sum - right_sum);
                        if(diff == 0){
                            ans+=2;

                        }
                        else if(diff==1){
                            ans++;
                        }
                    }
                    return ans;
                }
            }
        }
}