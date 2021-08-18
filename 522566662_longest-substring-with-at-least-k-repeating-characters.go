id = 522566662 
lang = golang 
runtime  = 1920 ms 
memory = 5.6 MB
title_slug = longest-substring-with-at-least-k-repeating-characters
code =
 ```func longestSubstring(s string, k int) int {
    mx := -327654
    for i := 0  ; i < len(s) ; i++ {
        mp := make(map[byte]int )
        for j := i ; j < len(s) ; j++ {
            mp[s[j]] = mp[s[j]] + 1; 
            if hasMore(mp, k) {
                // fmt.Println("sdfsdfsd", i , j )
                cmp := j - i +1 ;
                // fmt.Println("sdfsdfsdf", cmp ) ;
                mx = max(mx, cmp ) 
            }
        }
    }
    
    fmt.Println(mx )
    if mx == -327654 {
        return 0 ;
    } else {
        return mx  ;
    }
}

func max(x, y int) int {
    if x > y {
        return x
    }
    return y
}
func hasMore(mp map[byte]int , target int ) bool {
    for _, val := range (mp) {
        // fmt.Println(val )
        if val < target {
            return false; 
        }
    }
    return true ;
} ```