id = 517320475 
lang = cpp 
runtime  = 0 ms 
memory = 13.4 MB
title_slug = sum-of-left-leaves
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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL || root->left == NULL && root->right == NULL )
        {
            return 0 ;
        }
        
        int sum = 0 ;
        
        rec(root, &sum , false) ;
        return sum ;
    }
    
    void rec(TreeNode * root, int *sum, bool isLeft )  
    {
         
        if(root->left == NULL && root->right == NULL && isLeft ==true )
        {
            *sum += root->val ;
            return ;
        }
        if(root->left != NULL ) {
            rec(root->left, sum, true ) ; 
        }
        if(root->right != NULL ) {
            rec(root->right, sum , false ) ;
        }
        return ;
    }
};```