id = 554163792 
lang = cpp 
runtime  = 488 ms 
memory = 165.9 MB
title_slug = number-of-pairs-of-interchangeable-rectangles
code =

 class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        vector<double>d; 
        
        for(auto i : rectangles) 
        {
            d.push_back((double)i[0]/i[1]) ;  
        }
        
        unordered_map<double, int> mp ; 
        
        long long ans = 0; 
        
        for( auto i :d )
        {
            if (mp.find(i) != mp.end()) 
            {
                ans += mp[i]; 
            }
            mp[i]++ ;
        }
        
        return ans;
    }
};