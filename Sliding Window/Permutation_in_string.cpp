//https://leetcode.com/problems/permutation-in-string/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> mp;
        for(auto x:s1) mp[x]++;
        bool c=false;

        for(auto x:s2){
            if(mp.find(x)!=mp.end()) c=true;

            if(c){
                if(mp.find(x)==mp.end()) break;
                mp[x]--;
            }
                
        }

        for(auto x: mp){
            if(x.second!=0) return false;
        }

        return true;
    }
};