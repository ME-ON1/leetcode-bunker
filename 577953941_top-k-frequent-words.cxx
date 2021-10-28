id = 577953941 
lang = cpp 
runtime  = 16 ms 
memory = 12.7 MB
title_slug = top-k-frequent-words
code =

 class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mp;
        vector<string> ar; 
        auto comp = [&](const pair<string, int>a, const pair<string,int>b){
            if (a.second == b.second ) 
            {
                return a.first > b.first ;
            }
            return a.second < b.second; 
        };
        
        priority_queue<pair<string,int>, vector<pair<string,int>>, decltype(comp)> pq(comp);
        for(auto i : words ) 
        {
            mp[i]++ ;
        }
        
        for(auto i : mp )
        {
            pq.push(make_pair(i.first, i.second)) ;
        }
        
        
        while(pq.size() > 0  && k--)
        {
            ar.push_back(pq.top().first) ;
            pq.pop( );
        }
        
        
        return ar ;
    }
};