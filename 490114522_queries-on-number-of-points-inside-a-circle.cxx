id = 490114522 
lang = cpp 
runtime  = 72 ms 
memory = 16.4 MB
title_slug = queries-on-number-of-points-inside-a-circle
code =
 ```class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        // sort(point.begin(), points.end()) ;
        vector<int> ar ;
        for(int i = 0 ; i < queries.size() ; i++ ) {
            int r = queries[i][2] ;
            int x = queries[i][0] ;
            int y = queries[i][1] ;
            int ans = 0 ;
            for(int i = 0 ; i < points.size(); i++ ){
                if(pow(x - points[i][0], 2) + pow(y - points[i][1] , 2) <= r*r ){
                    ans++ ;
                }
            }
            ar.push_back( ans );    
        }
        
        return ar ;
    }
    
//     int checkpoints(vector<vector<int>> ar,  vector<int> cir ){
//         int i = 0 ;
//         for(i = 0 ; i < n ; i++ ){
//             if(abs(sqrt(cir[0] - ar[i][0]) + sqrt(cir[1] - ar[i][1])) < r){
                
//             }else if()
//         }
//     }
};```