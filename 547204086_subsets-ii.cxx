id = 547204086 
lang = cpp 
runtime  = 3 ms 
memory = 7.9 MB
title_slug = subsets-ii
code =

 class Solution {
public:
    vector<vector<int>> gr ;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int> >ar ;
        vector<int> tmp ; 
        sort(nums.begin(), nums.end()) ;
        recurse(0 , nums , tmp ) ;
        
        return gr   ;
    }
    
    void recurse(int ind,  vector<int>& nums , vector<int> tmp )
    {
        if (ind > nums.size() )
        {
            return ;
        }
        
        gr.push_back(tmp ) ;
                
        for(int i = ind ; i < nums.size() ; i++ )
        {
            if (i> ind && nums[i] == nums[i-1] )
            {
                continue ;
            }
            
            tmp.push_back(nums[i]);
            recurse(i + 1, nums , tmp) ;
            tmp.pop_back(); 
        }
        
        
        return ;
    }
};