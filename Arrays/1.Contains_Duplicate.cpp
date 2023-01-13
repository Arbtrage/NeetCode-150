//https://leetcode.com/problems/contains-duplicate/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(auto x:nums){
            if(mp.find(x)!=mp.end()) return true;
            else mp[x]++;
        }
        return false;
    }
};