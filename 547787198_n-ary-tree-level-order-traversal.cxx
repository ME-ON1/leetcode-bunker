id = 547787198 
lang = cpp 
runtime  = 51 ms 
memory = 11.7 MB
title_slug = n-ary-tree-level-order-traversal
code =

 /*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ar ; 
        if (root == NULL ) return ar ;
        queue<Node*> q; 
        
        q.push(root);
        while(!q.empty())
        {
            vector<int > tmp ; 
            auto n = q.size() ; 
            
            for (int i = 0; i < n ; i++ ) 
            {
                auto p = q.front() ; 
                q.pop() ;
                
                for(auto j : p->children )
                {
                    if (j != NULL )
                        q.push(j)  ;
                }
                tmp.push_back(p->val) ;
            }
            ar.push_back(tmp) ;
        }
        return ar ;
    }
};