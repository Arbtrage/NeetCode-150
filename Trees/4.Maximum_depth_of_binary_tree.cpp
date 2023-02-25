//https://leetcode.com/problems/maximum-depth-of-binary-tree/

#include <bits/stdc++.h>
using namespace std;


// Definition for a binary tree node.

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        
        int lf=maxDepth(root->left);
        int rg=maxDepth(root->right);
        
        int m=max(lf,rg);
        
        return 1+m;
    }
};