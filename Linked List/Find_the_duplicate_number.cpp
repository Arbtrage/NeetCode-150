//https://leetcode.com/problems/find-the-duplicate-number/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> v(nums.size(),0);
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(v[nums[i]])
            {
                ans=nums[i];
                break;
            }
            v[nums[i]]=1;
        } 
        return ans; 
    }
};