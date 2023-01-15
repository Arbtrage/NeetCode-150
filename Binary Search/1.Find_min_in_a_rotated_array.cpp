//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int mn=nums[0];
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<mn){
                mn=nums[mid];
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return mn;
    }
};