//https://leetcode.com/problems/maximum-product-subarray/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int max_so_far=nums[0], min_so_far=nums[0], ans=nums[0];

        for(int i=1;i<n;i++){
            if(nums[i] < 0) swap(max_so_far,min_so_far);

            max_so_far=max(nums[i],max_so_far*nums[i]);
            min_so_far=min(nums[i],min_so_far*nums[i]);
            ans=max(ans,max_so_far);
        }

        return ans;
    }
};