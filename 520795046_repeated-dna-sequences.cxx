id = 520795046 
lang = cpp 
runtime  = 244 ms 
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
            string l_tmp = s.substr(lo++ ,10) ;
            if(st.find(l_tmp) != st.end() && pushed.find(l_tmp) == pushed.end() ) {
                ar.push_back(l_tmp ) ;
                pushed.insert(l_tmp) ; 
            }
            else
            {
                st.insert(l_tmp) ;
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