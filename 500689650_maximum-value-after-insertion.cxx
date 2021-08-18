id = 500689650 
lang = cpp 
runtime  = 92 ms 
memory = 35.6 MB
title_slug = maximum-value-after-insertion
code =
 ```class Solution {
public:
    string maxValue(string n, int x) {
        int pos = 1  ; 
        if(n[0] == '-') {
            pos = 0 ; 
            n = n.substr(1) ;
        }
        
        if(pos ){
            cout << "sna" << endl ;
           for(int i = 0 ; i < n.size(); i++ ){ 
                if(n[i] - '0' < x ) {
                    return n.substr(0 , i) + to_string( x ) + n.substr(i   , n.size() ) ;
                }
            }
            
            return  n  + to_string(x) ;
        }else {
            for(int i = 0 ; i < n.size() ; i++ ) {
                if(n[i] - '0' > x ) {
                    return '-' + n.substr(0 , i)  + to_string(x) + n.substr(i) ;
                }
            }
            
            return '-' + n + to_string(x) ;
        }
        
        
        // return n ;
    }
};```