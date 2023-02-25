//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=INT_MAX;
        int b=0;
        for(int i=0;i<prices.size();i++){
            a=min(a,prices[i]);
            b=max(b,prices[i]-a);
        }
        return b;
    }
};