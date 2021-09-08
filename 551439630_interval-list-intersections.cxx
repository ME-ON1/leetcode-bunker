id = 551439630 
lang = cpp 
runtime  = 48 ms 
memory = 19.9 MB
title_slug = interval-list-intersections
code =

 class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b ) {
        vector<vector<int>> res; 
          if(a.size() == 0 || b.size() == 0) 
          {
              return res ;
          }
        
        int f = 0 , s = 0 ; 
        
        while(f < a.size() && s < b.size() ) 
        {
            int lo = max(a[f][0], b[s][0]);
            int ho = min(a[f][1], b[s][1]); 
            
            if (lo <= ho )
            {
                vector<int> tmp ;
                tmp.push_back(lo) ;
                tmp.push_back(ho) ;
                res.push_back(tmp ) ;
            }   
            if (a[f][1] < b[s][1]) 
            {
                f++ ;
            }
            else 
            {
                s++ ;     
            }
        }
        return res ;
    }
};