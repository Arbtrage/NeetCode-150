//https://leetcode.com/problems/max-area-of-island/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int r,c;
    int dfs(vector<vector<int>> &arr,int i,int j){
        if(i<0 or j<0 or i>=r or j>=c or !arr[i][j]) return 0;
        arr[i][j]=0;
        return 1+dfs(arr,i+1,j)+dfs(arr,i,j+1)+dfs(arr,i-1,j)+dfs(arr,i,j-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area=0;
        r=grid.size();
        c=grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    area=max(area,dfs(grid,i,j));
                }
            }
        }
        return area;
    }
};