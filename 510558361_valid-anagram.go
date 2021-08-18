id = 510558361 
lang = golang 
runtime  = 24 ms 
memory = 6.5 MB
title_slug = valid-anagram
code =
 ```func sortString(s string ) string {
    w := strings.Split(s , "") 
    
    sort.Strings(w ) 
    
    return strings.Join(w, "")
}

func isAnagram(s string, t string) bool {
    if sortString(s) == sortString(t) {
        return true 
    }else {
        return false 
    }
}```