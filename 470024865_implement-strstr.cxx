id = 470024865 
lang = cpp 
runtime  = 0 ms 
memory = 6.8 MB
title_slug = implement-strstr
code =
 ```class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0 ){
            return 0 ;
        }
        
        if(haystack.size() < needle.size() ){
            return -1 ;
        }
        
        if(haystack == needle){
            return 0 ;
        }
        bool global_flag = false ;
        int index = -1 ;
        for(int i = 0, j = 0 ;i< haystack.size() ;i++ ) {
            if(haystack[i] == needle[j]) {
                int temp = i ; 
                bool flag = true ;
                if(temp + needle.size() -1 < haystack.size()){
                    for(int k = 0 ; k  < needle.size() ; k++ ) {
                        if(haystack[temp] == needle[k]){
                            temp++ ;
                        }else {
                            flag = false ;
                            break ;
                        }
                    }    
                }else {
                    flag = false ;
                }
                if(flag) {
                    index = i ;
                    global_flag = true ;
                    break;
                }
            }
        }
    return index ;
        
    }
};```