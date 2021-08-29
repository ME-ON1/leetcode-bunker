id = 546167329 
lang = cpp 
runtime  = 224 ms 
memory = 78.7 MB
title_slug = find-the-kth-largest-integer-in-the-array
code =

 class Solution {
public:
    struct cmp {
        bool operator()(string &a, string &b )
        {
        return a.size() == b.size() ?  a > b : a.size() > b.size() ;
        }    
     } ;    
    
    
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string ,vector<string> , cmp > q;
        
        for( auto i: nums )
        {
            q.push(i) ;
            if (q.size() > k )
            {
                q.pop() ;
            }
        }
        
        return q.top(); 
    }
};