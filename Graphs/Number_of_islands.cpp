//https://leetcode.com/problems/number-of-islands/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void island(vector<vector<char>> &grid,int x,int y,int r,int c){
        if(x<0 || x>=r || y<0 ||y>=c || grid[x][y]!='1'){
            return;
        }

        grid[x][y]='2';
        island(grid,x+1,y,r,c);
        island(grid,x,y+1,r,c);
        island(grid,x-1,y,r,c);
        island(grid,x,y-1,r,c);
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        if(r==0) return 0;
        int c=grid[0].size();

        int ctr=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                    island(grid,i,j,r,c);
                    ctr++;
                }
            }
        }
        return ctr;
    }
};