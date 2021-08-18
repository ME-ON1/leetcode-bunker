id = 520835478 
lang = golang 
runtime  = 52 ms 
memory = 11.4 MB
title_slug = repeated-dna-sequences
code =
 ```func findRepeatedDnaSequences(s string) []string {
    mp := make(map[string]int )
    np := make(map[string]int)
    
//     np := _ 
    var ar []string 
    if len(s) < 10 {
        return ar ;
    }
    tmp := s[:10 ] 
    // fmt.Println(len(tmp))
    mp[tmp] = 1 
    // lo := 0 
    for hi := 10 ; hi < len(s) ; hi++ {
        // lo++ ;
        tmp += string(s[hi])
        tmp = tmp[1:len(tmp)] 
        // fmt.Println(len(tmp))
        
        if mp[tmp] == 1 && np[tmp] != 1 {
            ar = append(ar, tmp) 
            np[tmp] = 1 
        } else{
            mp[tmp] = 1; 
        }
    }
    // fmt.Println(tmp)
    
    return ar
}```