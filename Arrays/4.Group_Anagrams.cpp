//https://leetcode.com/problems/group-anagrams/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> words;
        for(auto x:strs){
            string i=x;
            sort(i.begin(),i.end());
            words[i].push_back(x);
        }
        vector<vector<string>> ans;

        for(auto x :words){
            ans.push_back(x.second);
        }

        return ans;
    }
};