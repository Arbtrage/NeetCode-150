//https://leetcode.com/problems/product-of-array-except-self/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int zero=0;
        for(auto x: nums){
            if(x==0){
                zero++;
                continue;
            }
            prod*=x;
        }

        if(zero==0){
            for(auto &x:nums){
                x=prod/x;
            }
        }
        else if(zero==1){
            for(auto &x:nums){
                if(x==0){
                    x=prod;
                    continue;
                }
                x=0;
            }
        }
        else{
            for(auto &x:nums){
                x=0;
            }
        }

        return nums;
    }
};