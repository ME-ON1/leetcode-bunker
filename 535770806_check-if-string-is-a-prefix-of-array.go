id = 535770806 
lang = golang 
runtime  = 0 ms 
memory = 3.4 MB
title_slug = check-if-string-is-a-prefix-of-array
code =
 ```func isPrefixString(s string, words []string) bool {
    var p string 
    
    for _, val := range words {
        p += val 
        
        if p == s  {
            return true 
        }
    }
    
    
    return false
}```