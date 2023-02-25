//https://leetcode.com/problems/longest-increasing-subsequence/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n-1,1);

        for(int i=n-1;i<=0;i--){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]){
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
        }

        sort(dp.begin(),dp.end());
        return dp[n-1];
    }
};