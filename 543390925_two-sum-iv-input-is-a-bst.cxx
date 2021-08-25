id = 543390925 
lang = cpp 
runtime  = 48 ms 
memory = 39.7 MB
title_slug = two-sum-iv-input-is-a-bst
code =

 /**
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
    bool findTarget(TreeNode* root, int k) {
        map<int , int > mp ; 
        
        queue<TreeNode*> q ; 
        q.push( root ) ;
        while(!q.empty()) 
        {
            if(mp [ k - q.front()->val] == 1 ) 
            {
                return true; 
            }
            mp[q.front()->val ] = 1;
            
            if(q.front()->left) q.push(q.front()->left) ;
            if(q.front()->right ) q.push(q.front()->right ) ;
            
            q.pop() ;
        }
        
        return false ;
    }
};