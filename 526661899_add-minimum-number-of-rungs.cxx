id = 526661899 
lang = cpp 
runtime  = 96 ms 
memory = 54.2 MB
title_slug = add-minimum-number-of-rungs
code =
 ```class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int minRungs = 0 ; 
        if ( rungs[0] - 0 > dist ) 
        {
            minRungs = rungs[0]/dist ; 
            if (rungs[0] % dist == 0)  
                minRungs-- ;
        }
        for(int i = 1 ; i < rungs.size() ; i++ ) 
        {
            int dif = rungs[i] - rungs[i-1]; 
            if( dif > dist ) 
            {
                minRungs += dif / dist ;
                if(dif % dist  == 0) 
                    minRungs-- ; 
            }
        }
        return minRungs; 
    }
};```