id = 531676190 
lang = golang 
runtime  = 152 ms 
memory = 21.1 MB
title_slug = find-center-of-star-graph
code =
 ```func findCenter(edges [][]int) int {
    mp := make(map[int]int) 
    for _, val := range edges {
        mp[val[1]]++ ;
        mp[val[0]]++; 
    }
    var value int ;
    for key,val := range mp {
        if  val == len(edges)  {
            value = key 
        }
    }
    
    return value 
}```