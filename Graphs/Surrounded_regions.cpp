//https://leetcode.com/problems/surrounded-regions/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fill(vector<vector<char>> &arr,int x,int y,int r,int c){
        if(x<0 || y<0 || x>=r || y>=c || arr[x][y]=='o') return 0;
        else if(arr[x][y]=='x') return 1;

        int right=fill(arr,x+1,y,r,c);
        int up=fill(arr,x,y+1,r,c);
        int left=fill(arr,x-1,y,r,c);
        int bottom=fill(arr,x,y-1,r,c);
        int sum=right+up+left+bottom;
        if(sum==4){
            arr[x][y]='x';
        }
        return 1;
    }
    void solve(vector<vector<char>>& board) {
        int r=board.size();
        int c=board[0].size();

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]=='o'){
                    fill(board,i,j,r,c);
                }
            }
        }
    }
};