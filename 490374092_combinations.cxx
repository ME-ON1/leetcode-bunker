id = 490374092 
lang = cpp 
runtime  = 444 ms 
memory = 165.1 MB
title_slug = combinations
code =
 ```class Solution {
public:
    vector<vector<int> > ar ;
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> pr ;
        int x = 0 , startFrom = 1; 
        getcombin(n ,k , 1 , pr ) ;  
        return ar ; 
    }
    
    void getcombin(int n, int k , int startFrom ,vector<int> pr ) {
        if(pr.size() == k) {
            // cout << pr.size() << " e r " <<  endl ;
            ar.push_back(pr) ;
            return ;
        }
     
        for(int i = startFrom ; i <= n ; i++ ){
            pr.push_back(i) ; 
            getcombin(n, k ,i + 1 , pr ) ;
            pr.pop_back() ;
        }
    }
};```