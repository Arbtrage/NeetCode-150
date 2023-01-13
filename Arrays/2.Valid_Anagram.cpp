// https://leetcode.com/problems/valid-anagram/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        for(auto x:s) mp[x]++;
        for(auto x:t) {
            if(mp.find(x)==mp.end()) return false;
            mp[x]--;
        }
        for(auto x:mp){
            if(x.second>0) return false;
        }
        return true;
    }
};