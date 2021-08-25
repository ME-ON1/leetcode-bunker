id = 543873021 
lang = cpp 
runtime  = 36 ms 
memory = 14.6 MB
title_slug = kth-smallest-element-in-a-sorted-matrix
code =

 class Solution {
public:
    // using max-heap 
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> q ;
        
        for(int i = 0 ; i < matrix.size() ; i++ )
        {
            for(int j = 0 ; j < matrix[0].size() ; j++ ) 
            {
                q.push(matrix[i][j]) ; 
            }
        }
        
        while(q.size() > k )  {
            q.pop() ;
            
        }
        
        return q.top() ;
    }
};