//https://leetcode.com/problems/container-with-most-water/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0,e=height.size()-1;
        int global_area=0;
        int local_area=0;
        while(s<e){
            if(height[s]<=height[e]){
                local_area=height[s]*(e-s);
                s++;
            }else{
                local_area=height[e]*(e-s);
                e--;
            }

            if(local_area>global_area) global_area=local_area;
        }

        return global_area;
        
    }
};