id = 480847347 
lang = cpp 
runtime  = 16 ms 
memory = 24.7 MB
title_slug = average-of-levels-in-binary-tree
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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode *> q ;
        vector<double> ar ;
        q.push(root) ;
    
        while(!q.empty()) {
            TreeNode* t = q.front() ;
            queue<TreeNode *> temp ;
            long sum = 0 , count = 0 ;
            
            while(!q.empty()) {
                TreeNode * p = q.front() ;
                
                q.pop();
                sum += p->val ;
                count ++  ;
                if(p->left != NULL ){
                    temp.push(p->left);
                }
                if(p->right != NULL ){
                    temp.push(p->right ) ;
                }
            }
            q = temp ; 
            ar.push_back(sum * 1.0 / count )  ;
        }
        
        return ar ;
    }
};```