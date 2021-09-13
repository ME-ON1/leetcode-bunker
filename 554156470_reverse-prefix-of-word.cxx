id = 554156470 
lang = cpp 
runtime  = 0 ms 
memory = 6.3 MB
title_slug = reverse-prefix-of-word
code =

 class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind = 0 ; 
        for(int i = 0;  i < word.size() ; i++ ) 
        {
            if (ch == word[i]) 
            {
                ind = i;
                break ; 
            }
        }
        
        reverse(word.begin() , word.begin() + ind  + 1 ); 
        cout << ind << " " << word << endl ;
        return word ; 
    }
};