id = 510574565 
lang = golang 
runtime  = 0 ms 
memory = 2.8 MB
title_slug = valid-anagram
code =
 ```func isAnagram(s string, t string) bool {
    var ar []int = make([]int, 26 )

    for index, _ := range s {
        ar[s[index ] - 'a'] ++ ;
    }


    for index, _ := range t {
        ar[t[index] - 'a'] -- ;
    }

    for _, val := range ar {
        if val != 0 {
            return false 
        }
    }
    return true 
}```