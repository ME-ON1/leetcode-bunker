id = 533336300
runtime  = 8 ms 
memory = 8.6 MB
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
        if(node == NULL) 
        {
            return NULL ;
        }
        
        
        stack<Node*> st ;
        unordered_map<Node* , Node* > mp;
        
        Node* starting_Node = new Node(node->val , {}) ;
        st.push(node) ;
        mp[node] = starting_Node ; 
        while(!st.empty())
        {
            Node* tmpNode = st.top() ;
            st.pop();
            // cout << "Srs " << tmpNode->neighbors.size() << endl ;
            for(auto negh : tmpNode->neighbors )  
            {
                if(!mp[negh] ) 
                {
                    mp[negh] = new Node(negh->val , {}) ;
                    st.push(negh);
                }
                mp[tmpNode]->neighbors.push_back(mp[negh]) ;
            }
        }
        return starting_Node ; 
    }
};```