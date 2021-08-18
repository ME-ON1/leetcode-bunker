id = 520795914 
lang = cpp 
runtime  = 128 ms 
memory = 20.3 MB
title_slug = repeated-dna-sequences
code =
 ```class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        set<string>st, pushed ;
        vector<string> ar; 
        if(s.size() < 10 ) 
        {
            return ar ;
        }
        string tmp = s.substr(0 ,10 );
        st.insert(tmp) ;
        int lo = 1  ;
        for(int hi = 10 ; hi < s.size() ; hi++ ) 
        {
            tmp.erase(tmp.begin() + 0) ;
            tmp += s[hi] ;
            if(st.find(tmp) != st.end() && pushed.find(tmp) == pushed.end() ) {
                ar.push_back(tmp ) ;
                pushed.insert(tmp) ; 
            }
            else
            {
                st.insert(tmp) ;
            }
        }
        return ar; 
    }
    
    // vector<int> copy_st_ar(set<string> &s) {
    //     vector<string> ar; 
    //     for(auto i : s) 
    //     {
    //         ar.push_back(i) ;
    //     }
    // }
};```