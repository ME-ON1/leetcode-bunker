id = 575907545 
lang = cpp 
runtime  = 303 ms 
memory = 54.9 MB
title_slug = k-closest-points-to-origin
code =

 class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans ; 
        priority_queue<pair<double, int>> pq ;
        
        for(int i = 0; i < points.size(); i++ ) 
        {
            pq.push(make_pair(calculateDistFromOrigin(points[i]), i)) ;
            
            if (pq.size() > k ) 
            {
               
                pq.pop(); 
            }
        }
        while(!pq.empty()) 
        {
            auto p = pq.top();
            ans.push_back(points[p.second]) ;
            pq.pop() ;
        }
        return ans ;
    }
    
    
    double calculateDistFromOrigin(vector<int>& ar  ) 
    {
        return pow(pow(ar[0],2 ) + pow(ar[1],2 ), 0.5 ) ;
    }
};