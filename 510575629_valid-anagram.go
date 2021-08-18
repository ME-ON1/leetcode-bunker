id = 510575629 
lang = golang 
runtime  = 4 ms 
memory = 2.8 MB
title_slug = valid-anagram
code =
 ```func isAnagram(s string, t string) bool {
    var mp = make(map[rune]int) 
    
    for _, val := range s {
        mp[val] += 1 
    }
    
    for _, val := range t {
        mp[val] -= 1 
    }
    
    for _, val := range mp {
        if val != 0 {
            return false 
        }
    }
    return true  
}```