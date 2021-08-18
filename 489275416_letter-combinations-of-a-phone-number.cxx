id = 489275416 
lang = cpp 
runtime  = 4 ms 
memory = 7.9 MB
title_slug = letter-combinations-of-a-phone-number
code =
 ```class Solution {
public:
   
    vector<string> letterCombinations(string digits) {
        
        map<int ,string > mp ;
        mp[2] = "abc" ;
        mp[3] = "def" ;
        mp[4] = "ghi" ;
        mp[5] = "jkl" ;
        mp[6] = "mno" ;
        mp[7] = "pqrs" ;
        mp[8] = "tuv"  ;
        mp[9] = "wxyz" ;
        vector<string > ar ;
        if(digits.size() == 0){
            return ar ;
        }
        string tmp = "" ;
        getNumber(digits , ar, 0, tmp , mp ) ;
        return ar ;
    }
    
    void getNumber(string digits, vector<string> & ar, int index, string & tmp,map<int, string>mp  ) {
        if(tmp.size() == digits.size()) {
            ar.push_back(tmp ) ;
            return ; 
        }
        
        for(int i = 0 ; i < mp[digits[index] - '0'].size() ; i++ ) {
            string tp =  mp[digits[index] - '0'] ;
            // cout << tp << endl ;
            tmp += tp[i] ;
            getNumber(digits , ar , index+ 1 , tmp , mp) ;
            tmp.pop_back() ;
        }
        // getNumber(digits , ar , index +1 , tmp + mp[digits[index]] - '0')
    }
};```