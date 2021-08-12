id = 531674495
runtime  = 300 ms 
memory = 92.6 MB
title_slug = find-center-of-star-graph
code =
 ```class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
       map<int, int> mp;
        
        for(auto i: edges ) 
        {
            mp[i[0]]++ ;
            mp[i[1]]++ ;
        }
        
        int val ;
        for(auto i : mp )
        {
            if(i.second == edges.size()) 
            {
                val = i.first; 
                break ;
            }
        }
        
        return val ;
    }
};```