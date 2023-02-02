//https://leetcode.com/problems/sliding-window-maximum/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int i=0,j=0;
        deque<int> q;
        int n=nums.size();
        while(j<n){
            while(q.size()>0 and q.back()<nums[j]){
                q.pop_back();
            }
            q.push_back(nums[j]);
            
            if(j-i+1<k) j++;
            else if(j-i+1==k){
                ans.push_back(q.front());
                if(q.front()==nums[i]){
                    q.pop_front();
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};