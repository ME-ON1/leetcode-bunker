id = 531677523 
lang = golang 
runtime  = 120 ms 
memory = 14.9 MB
title_slug = find-center-of-star-graph
code =
 ```func findCenter(edges [][]int) int {
    if edges[0][0] == edges[1][0] || edges[1][1] == edges[0][0] {
        return edges[0][0]
    }else {
        return edges[0][1]
    }
}```