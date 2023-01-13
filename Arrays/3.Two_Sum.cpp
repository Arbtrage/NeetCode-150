// https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int i=0;
        vector<int> arr;
        for(auto x:nums){
            if(mp.find(target-x)!=mp.end()){
                arr.push_back(mp[target-x]);
                arr.push_back(i);
                break;
            }
            mp[x]=i++;
        }
        return arr;
    }
};