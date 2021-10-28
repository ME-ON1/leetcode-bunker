id = 577976375 
lang = cpp 
runtime  = 16 ms 
memory = 14.7 MB
title_slug = reorder-data-in-log-files
code =

 class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> digit, letters ;
        for(auto i : logs) 
        {
            auto s = i.substr(i.find(" ")) ;
            if (isdigit(s[1])) 
            {
                digit.push_back(i);
            }
            else
            {
                letters.push_back(i) ;
            }
        }
        auto cmp = [ &](string a , string b) {
            string aa = a.substr(a.find(' ')) ;
            string bb = b.substr(b.find(' ')) ;
            
            return aa == bb ? a < b : aa < bb ; 
        };
        
        sort(letters.begin(), letters.end(), cmp); 
        for(auto i: digit )
        {
            letters.push_back(i ); 
        }
        
        return letters ;
    }
};