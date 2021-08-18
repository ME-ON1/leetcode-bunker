id = 516872381 
lang = cpp 
runtime  = 0 ms 
memory = 16.4 MB
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
        queue<TreeNode* > q ;
        
        q.push(root)  ;
        q.push(root) ;
               
        while(!q.empty())
        {
            TreeNode * n = q.front() ;
            q.pop() ;
            
            TreeNode * p = q.front() ;
            q.pop() ;
            
            if(n == NULL && p == NULL  )
            {
                continue ;
            }
            if(n ==NULL || p ==NULL )
            {
                return false ;
            }
            
            if(n->val != p->val ) {
                return false ;
            }
            
                q.push(n->left) ;
                q.push(p->right) ;
            
                q.push(n->right) ;
                q.push(p->left) ;
        }
        
        return true ;
    }
};```