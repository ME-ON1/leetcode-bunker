id = 516418154 
lang = cpp 
runtime  = 4 ms 
memory = 16.3 MB
title_slug = symmetric-tree
code =
 ```/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
       return rec(root->left, root->right ) ; 
    }
    
    
    bool rec(TreeNode* rootL , TreeNode* rootR )
    {
        if(!rootL && !rootR)
        {
            return true ;
        }
        if(!rootR || !rootL )
        {
            return false ;
        }
        
        if(rootL->val != rootR->val) 
        {
            return false ;
        }
        
        return rec(rootL->left, rootR->right) && rec(rootL->right , rootR->left ) ;
    }
};```