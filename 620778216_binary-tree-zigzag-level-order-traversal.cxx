id = 620778216 
lang = cpp 
runtime  = 4 ms 
memory = 12.1 MB
title_slug = binary-tree-zigzag-level-order-traversal
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
                        // tmp.push_back(node->data) ;
        vector<vector<int> > ans; 
        
        if(root == NULL ) {
            return ans ; 
        }
        queue<TreeNode*> q ;
        q.push(root) ;
        int count = 0; 
        // cout << q.size() << endl ;
        while(!q.empty() ) {
            int nodeCount = q.size()  ;
            
            vector<int> tmp ;
            // cout << nodeCount << endl ;
            while( nodeCount ) {
                TreeNode* node = q.front() ;
                tmp.push_back(node->val) ;
                q.pop() ;
                    if(node->left != NULL ) {
                        q.push(node->left) ;
                    }
                    if(node->right != NULL ) {
                        q.push(node->right ) ;
                    }
                nodeCount--; 
            }
            if (count & 1)  {
                reverse(tmp.begin(), tmp.end()) ;
            }
            ans.push_back(tmp) ;
            count++ ;
        }
    return ans ;
        
    }
};