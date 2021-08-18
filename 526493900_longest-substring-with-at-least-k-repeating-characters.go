id = 526493900 
lang = golang 
runtime  = 20 ms 
memory = 2.1 MB
title_slug = longest-substring-with-at-least-k-repeating-characters
code =
 ```func longestSubstring(s string, k int) int {
    mp := make(map[byte]int) 
    
    for _, val := range(s){
        mp[byte(val)] += 1; 
    } 
    var mx int = 0
    uniq_count := len(mp) 
    
    for i := 1 ; i <= uniq_count ; i++ {
        var lo int = 0 
        var hi int = 0 
        uniq := 0 
        k_string := 0
        ar := make(map[byte]int)
        for  ;hi < len(s); {
            if uniq <= i {
                if ar[byte(s[hi])] == 0 {
                    uniq++
                }
                ar[byte(s[hi])]++ 
                if ar[byte(s[hi])] == k {
                    k_string++ 
                }
                hi++ 
            }else {
                if ar[byte(s[lo])] == k {
                    k_string-- 
                }
                ar[byte(s[lo])]-- 
                if ar[byte(s[lo])] == 0 {
                    uniq-- ;
                }
                lo++ 
            }
            if uniq == i && uniq == k_string {
                mx = Max(mx, hi - lo );
            }
        }
    }
    return mx; 
}

func Max(x int, y int) int {
    if x < y {
        return y
    }
    return x
}```