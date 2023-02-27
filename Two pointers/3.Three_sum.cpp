//https://leetcode.com/problems/3sum/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        if(n<3) return ans;


        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i==0 or nums[i]!=nums[i-1]){
                int l=i+1,h=n-1,sum=-nums[i];
                while(l<h){
                    if(nums[l]+nums[h]==sum){
                        ans.push_back({nums[l],nums[h],nums[i]});
                        while(l<h and nums[l]==nums[l+1]) l++;
                        while(l<h and nums[h]==nums[h-1]) h--;

                        l++;
                        h--;
                    }
                    else if(nums[l]+nums[h]<sum){
                        l++;
                    }
                    else{
                        h--;
                    }
                }
            }
        }

        return ans;
    }
};