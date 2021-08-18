id = 495746940 
lang = cpp 
runtime  = 0 ms 
memory = 6.4 MB
title_slug = truncate-sentence
code =
 ```class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream stream(s) ;
        
        string word ;
        while( k--) {
            cout << word << endl ;
            string w ;
            stream >> w ;
            word += w ;
            if(k >= 1 ) {
            word += " " ;
                                
            }
        }
        
        return word; 
    }
};```