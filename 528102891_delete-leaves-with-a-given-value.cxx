id = 528102891 
lang = cpp 
runtime  = 4 ms 
memory = 21.8 MB
title_slug = delete-leaves-with-a-given-value
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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
       if(root->left != NULL ) {
           TreeNode* node = removeLeafNodes(root->left, target ) ;
           root->left = node ; 
       }
        
        if(root->right != NULL ) {
            TreeNode* node = removeLeafNodes(root->right , target); 
            root->right = node ; 
        }
        
        if(root->left == root->right && root->val == target)  
        {
            return NULL ;
        } else {
            return root ; 
        }
        
        // return root; 
    }
};```