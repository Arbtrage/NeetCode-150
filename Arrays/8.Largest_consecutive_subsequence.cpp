//https://leetcode.com/problems/longest-consecutive-sequence/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int ans=1;
        int lans=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]+1){
                lans++;
            }
            else if(nums[i+1]!=nums[i]){
                lans=1;
            }
            ans=max(ans,lans);
        }
        return ans;
    }
};