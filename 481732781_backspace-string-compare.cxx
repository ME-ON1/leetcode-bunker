id = 481732781 
lang = cpp 
runtime  = 4 ms 
memory = 6.3 MB
title_slug = backspace-string-compare
code =
 ```class Solution {
public:
    bool backspaceCompare(string s, string t) {
      stack<char> a , b; 
        for(auto i : s ){
            if(i != '#') {
                a.push(i);
            }else {
                if(!a.empty()) {
                    a.pop() ;
                }
            }
        }
        for(auto i : t) {
            if(i != '#') {
                b.push(i) ;
            }else{
                if(!b.empty()){
                    b.pop() ;                
                }
            }
        }
            
        if(a.size() != b.size()) {
            return false ;
        }else {
            while(!a.empty()){
                char c = a.top() ;
                char f = b.top() ;
                a.pop() ;
                b.pop() ;
                if(f == c) {
                    continue;
                }else {
                    return false ;
                }
            }
        }
            return true ;
    }
};```