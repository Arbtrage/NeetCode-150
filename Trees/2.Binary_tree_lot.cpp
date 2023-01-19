// https://leetcode.com/problems/binary-tree-level-order-traversal/description/

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
    // Using Queue data structure
    vector<vector<int>> qlot(TreeNode* root){
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int> level;
            for(int i=0;i<s;i++){
                TreeNode* node= q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
    // Using Recursion
    void lot(TreeNode* root,int level,vector<vector<int>> &ans){
        if(!root) return ;
        if(level==0) ans.push_back({root->val});
        else{
            ans[level].push_back(root->val);
        }
        lot(root->left,level+1,ans);
        lot(root->right,level+1,ans);

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lot(root,0,ans);
        return ans;
    }
};