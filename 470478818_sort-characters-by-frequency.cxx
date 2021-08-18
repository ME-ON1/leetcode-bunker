id = 470478818 
lang = cpp 
runtime  = 20 ms 
memory = 12.8 MB
title_slug = sort-characters-by-frequency
code =
 ```class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> v ;
        
        for(int i = 0; i < s.size(); i++ ) {
            if(v[s[i]] == 0 ){
                v[s[i]] = count_freq(s , i)  ;
            }
        }
        
        string h = sortMap(v) ;
        return h; 
    }
    
    string sortMap(unordered_map<char , int> & m) {
        vector<pair<char, int >> p ;
        
        for(auto i : m) {
            p.push_back(make_pair(i.first , i.second)) ;
        }
        
        sort(p.begin(),p.end(),cmp) ;
        string res ;
        for(auto i : p ){
            while(i.second-- ){
                res += i.first ;
            } 
        }
        return res ;
    }
    
    static bool cmp(pair<char, int>& a,  pair<char, int>& b) { 
        return a.second > b.second; 
    } 
    
    int count_freq(string s , int pos) {
        int count = 0 ;
        for(int i = 0; i < s.size(); i++ ) {
            if(s[i] == s[pos]) {
                count ++ ;
            }
        }
        return count ;
    }
};```