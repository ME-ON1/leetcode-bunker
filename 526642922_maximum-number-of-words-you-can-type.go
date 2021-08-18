id = 526642922 
lang = golang 
runtime  = 0 ms 
memory = 2.3 MB
title_slug = maximum-number-of-words-you-can-type
code =
 ```func canBeTypedWords(text string, brokenLetters string) int {
    mp := make(map[byte]int) 
    for _, va :=  range(brokenLetters) {
        mp[byte(va)] ++ ;
    }
    wordMax := 0  
    s := strings.Split(text, " ") 
    for _, val := range(s ) {
        found  := false ;
        
        for _ , v := range(val) {
            if mp[byte(v)] != 0 {
                found = true 
                break ;
            }
        }
        
        if found == false {
            wordMax ++; 
        }
    }
    return wordMax  ;
}```