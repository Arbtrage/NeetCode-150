//https://leetcode.com/problems/search-a-2d-matrix/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=0;
        int r=matrix.size();
        int c=matrix[0].size();
        int e=r*c-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            int element=matrix[mid/c][mid%c];
            if(element==target) return true;
            else if(element<target) s=mid+1;
            else e=mid-1;
            mid=s+(e-s)/2;
        }
        return false;
    }
};