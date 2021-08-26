id = 543935418 
lang = cpp 
runtime  = 116 ms 
memory = 20.1 MB
title_slug = kth-smallest-element-in-a-sorted-matrix
code =

 class Solution {
public:
    // using max-heap 
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<pair<int, pair< int, int>>  , vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q; 
        
        q.push({matrix[0][0], {0 , 0}}) ;
        set<pair<int, int >> st; 
        st.insert({0,0}) ;
        while(k > 1) 
        {
            pair<int, int > i = q.top().second ;
            q.pop() ;
            if(i.first + 1 < matrix.size() && st.find({i.first + 1 , i.second}) == st.end()) {
                cout << "1 0 " << endl ;
                q.push({matrix[i.first + 1][i.second] ,{i.first + 1, i.second}})  ;
                st.insert({i.first+ 1 , i.second} ) ; 
            }
            
            if(i.second + 1  < matrix[0].size() && st.find({i.first, i.second + 1}) == st.end()) 
            {
                q.push({matrix[i.first][i.second+ 1], {i.first , i.second +1}} ) ;
                st.insert({i.first,  i.second +1 }) ;
            }
            // cout << q.top().first << " " << q.top().second << endl  ;
            // q.pop(); 
            k-- ;
        }
        
        pair<int, pair<int,int>> p = q.top() ;
        // cout << p.first << "  " << p.second << endl ;         
        return p.first  ;
    }
};