//https://leetcode.com/problems/surrounded-regions/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<char>>& board, int i, int j) {
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != 'O') {
            return;
        }
        
        board[i][j] = '#'; // mark the cell as visited
        
        dfs(board, i - 1, j); // explore up
        dfs(board, i + 1, j); // explore down
        dfs(board, i, j - 1); // explore left
        dfs(board, i, j + 1); // explore right
    }
    
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        
        // mark all 'O' cells connected to border as visited
        for (int i = 0; i < m; i++) {
            dfs(board, i, 0); // left border
            dfs(board, i, n - 1); // right border
        }
        for (int j = 0; j < n; j++) {
            dfs(board, 0, j); // top border
            dfs(board, m - 1, j); // bottom border
        }
        
        // mark remaining 'O' cells as 'X' and mark '#' cells as 'O'
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O') {
                    board[i][j] = 'X';
                } else if (board[i][j] == '#') {
                    board[i][j] = 'O';
                }
            }
        }
    }
};
