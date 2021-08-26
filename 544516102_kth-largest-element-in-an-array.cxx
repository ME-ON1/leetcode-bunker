id = 544516102 
lang = cpp 
runtime  = 19 ms 
memory = 10.2 MB
title_slug = kth-largest-element-in-an-array
code =

 class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int > q ;   
        
        
        
        for(int i = 0 ; i < nums.size() ; i ++ ) 
        {
            q.push(nums[i] ) ;
            
            if(q.size() > nums.size() - k  + 1  ) 
                q.pop() ;
        }
        
        return q.top() ;
    }
    
    
};