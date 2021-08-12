id = 532796894 
lang = cpp 
runtime  = 4 ms 
memory = 8.5 MB
title_slug = clone-graph
code =
 ```/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {    
        if(node == NULL )
        {
            return NULL ;
        }
        queue<Node*> q ;
        unordered_map<Node * ,Node*>  mp ;
        
        Node * tmpNode = new Node(node->val, {}) ;
        
        q.push(node) ;
        
        mp[node] = tmpNode ;
        
        while(!q.empty())
        {
               
            Node* NewNode = q.front() ;
            q.pop() ;
            
            for(int i = 0 ; i < NewNode->neighbors.size() ; i++ ) 
            {
                if(!mp[NewNode->neighbors[i]]) 
                {
                    // not visited 
                    mp[NewNode->neighbors[i]] = new Node(NewNode->neighbors[i]->val, {}) ;
                    // NewNode->neighbors.push_back(Tmp) ;
                    q.push(NewNode->neighbors[i]);
                }
                mp[NewNode]->neighbors.push_back(mp[NewNode->neighbors[i]]); 
            }
        }
        
        return tmpNode ; 
    }
};```