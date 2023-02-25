//https://leetcode.com/problems/top-k-frequent-elements/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<pair<int,int>> arr;

        for(auto x:mp){
            arr.push_back({x.second,x.first});
        }
        sort(arr.rbegin(),arr.rend());
        vector<int> ans;
        int i=0;
        while(i<k){
            ans.push_back(arr[i++].second);
        }

        return ans;
    }
};