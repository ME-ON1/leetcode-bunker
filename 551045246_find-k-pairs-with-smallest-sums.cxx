id = 551045246 
lang = cpp 
runtime  = 84 ms 
memory = 64 MB
title_slug = find-k-pairs-with-smallest-sums
code =

 class Solution {
public:
 
    
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ar; 
        if(nums1.size() == 0 || nums2.size() == 0 || k == 0) 
            return ar ; 
        auto cmp = [&nums1 , &nums2](pair<int, int> a , pair<int,int> b){
            return nums1[a.first] + nums2[a.second] > nums1[b.first] + nums2[b.second];
        }; 
        
        priority_queue<pair<int, int>, vector<pair<int,int>>, decltype(cmp) > q(cmp) ;
        q.emplace(0 , 0 ) ;
        while(k-- && !q.empty() )
        {
            auto p = q.top(); 
            q.pop(); 
            // cout << n << " " << p.second << endl ; 
            ar.push_back({nums1[p.first], nums2[p.second]});
            if (p.first + 1 < nums1.size() )  
            {
                q.emplace(p.first + 1, p.second) ;
            }
            if (p.first ==0 && p.second+ 1 < nums2.size() ) 
            {
                q.emplace(p.first, p.second + 1) ;
            }
        }
        
        return ar ; 
    }
};