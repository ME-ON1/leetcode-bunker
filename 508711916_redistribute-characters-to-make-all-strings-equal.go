id = 508711916 
lang = golang 
runtime  = 8 ms 
memory = 4 MB
title_slug = redistribute-characters-to-make-all-strings-equal
code =
 ```func makeEqual(words []string) bool {
    var ma = make(map[rune]int)
    
    
    for _, val := range words {
        for _, va := range val {
            ma[va]++ ;
        }
    }
    
    size := len(words) 
    for _, val := range ma {
        if val % size != 0 {
            return false  
        }
    }
    
    return true 
}```