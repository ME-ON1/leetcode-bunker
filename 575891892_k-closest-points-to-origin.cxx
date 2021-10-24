id = 575891892 
lang = cpp 
runtime  = 188 ms 
memory = 57.7 MB
title_slug = k-closest-points-to-origin
code =

 class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // vector<pair<double, int>> pr ;
        vector<vector<int>> ans ; 
        vector<pair<double, int >> ar; 
        
        for(int i = 0 ; i < points.size() ; i++ ) 
        {
            double val = calculateDistFromOrigin(points[i]) ;
            ar.push_back(make_pair(val, i))  ;
        }
        
        sort(ar.begin(), ar.end()) ;
        
        for(int i = 0;  i < k ; i ++ )
        {
            ans.push_back(points[ar[i].second]); 
        }
        
        return ans ;
    }
    
    
    double calculateDistFromOrigin(vector<int>& ar  ) 
    {
        return pow(pow(ar[0],2 ) + pow(ar[1],2 ), 0.5 ) ;
    }
};