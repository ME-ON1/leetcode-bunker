id = 480894816 
lang = cpp 
runtime  = 12 ms 
memory = 22.6 MB
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
        vector<double> ar; 
        
        vector<int> cnt ;
        vector<double> sum ;
        
        dfs(root , 0 , cnt, sum );
        for(int i = 0; i < sum.size() ; i++ ) {
            sum[i] = sum[i]/(cnt[i] ) ;
        }
        return sum ;
    }
    
    void dfs(TreeNode * root , int n , vector<int> &cnt , vector<double> & sum ) {
        
        if(root == NULL ) {
            return ; 
        }
         if(cnt.size() <= n ) {
             cnt.push_back({}) ;
         }
        if(sum.size() <= n) {
            sum.push_back({});
        }
        
        
        sum[n] += root->val ;
        cnt[n]++ ;
        dfs(root->left ,n + 1, cnt , sum ) ;
        dfs(root->right , n+ 1 , cnt , sum ) ;
    }
};```