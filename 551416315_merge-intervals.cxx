id = 551416315 
lang = cpp 
runtime  = 11 ms 
memory = 14 MB
title_slug = merge-intervals
code =

 class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res; 
        sort(intervals.begin(), intervals.end() ) ;

        for(int i = 0 ; i < intervals.size() ; i++ ) 
        {
            if (res.empty() || res.back()[1] < intervals[i][0] ) 
            {
                res.push_back(intervals[i]) ;
            }
            else
            {
                res.back()[1] = max(res.back()[1], intervals[i][1]) ;
            }
        }
        
        return res; 
    }
};