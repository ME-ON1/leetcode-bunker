id = 530735220 
lang = cpp 
runtime  = 160 ms 
memory = 60.7 MB
title_slug = find-the-town-judge
code =
 ```class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<int> ar(n+1) ;
        for(int i = 0; i < trust.size(); i++ )
        {
            ar[trust[i][0]]--;
            ar[trust[i][1]]++; 
        }
        for(auto i = 1 ; i <= n; i++ ) 
            // cout << i <<" " << ar[i] << endl ; 
            if(ar[i] == n-1 )
            {
                return i  ;
            }
        return -1; 
            
    }
};```