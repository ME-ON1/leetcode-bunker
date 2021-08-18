id = 511881221 
lang = golang 
runtime  = 16 ms 
memory = 5.2 MB
title_slug = find-all-anagrams-in-a-string
code =
 ```func findAnagrams(s string, p string) []int {
    mp := make(map[byte]int) 
    for _, val := range p {
        mp[byte(val)]++ 
    }
    start, end  := 0 , 0

    cnt := len(p) 
    var ar []int 
    for end < len(s)  {
        if mp[byte(s[end])] >= 1 {
            cnt-- 
        }
        mp[byte(s[end])]--   
        end++ 
        if cnt == 0 {
            ar = append(ar, start )
        }
        
        if end - start == len(p)  {
            if mp[byte(s[start])] >= 0 {
                cnt++ 
            }
            mp[byte(s[start])]++
            start ++ 
        }
    }
    return ar 
}```