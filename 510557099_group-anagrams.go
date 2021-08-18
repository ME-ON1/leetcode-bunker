id = 510557099 
lang = golang 
runtime  = 28 ms 
memory = 9.1 MB
title_slug = group-anagrams
code =
 ```func sortStr(n string ) string {
    m := strings.Split(n, "")
    sort.Strings(m) 
    return strings.Join(m,"")
}

func groupAnagrams(strs []string) [][]string {
    mp := make(map[string][]string )
    var ar [][]string 
    for i := 0; i < len(strs) ; i++ {
        n := strs[i]
        m := sortStr(n) 
        mp[m] = append(mp[m], strs[i] )
    }
    
    for _, val := range mp {
        ar = append(ar, val )
    } 
    return ar
}```