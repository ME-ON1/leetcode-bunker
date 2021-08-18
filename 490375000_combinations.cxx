id = 490375000 
lang = cpp 
runtime  = 28 ms 
memory = 10 MB
title_slug = combinations
code =
 ```class Solution {
public:
    vector<vector<int> > ar ;
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> pr ; 
        int startFrom = 1 ;
        getcombin(n ,k , startFrom  , pr ) ;  
        return ar ; 
    }
    
    void getcombin(int &n, int &k , int startFrom ,vector<int>& pr ) {
        if(pr.size() == k) {
            // cout << pr.size() << " e r " <<  endl ;
            ar.push_back(pr) ;
            return ;
        }
     
        for(int i = startFrom ; i <= n ; i++ ){
            pr.push_back(i) ; 
            // startFrom = i +1  ;
            getcombin(n, k , i +1  , pr ) ;
            pr.pop_back() ;
        }
    }
};```