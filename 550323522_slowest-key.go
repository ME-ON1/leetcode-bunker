id = 550323522 
lang = golang 
runtime  = 4 ms 
memory = 3.9 MB
title_slug = slowest-key
code =

 func slowestKey(releaseTimes []int, keypressed string) byte {

    var longest byte = keypressed[0] ;
    var min int = releaseTimes[0] ;
    for i := 1 ; i < len(releaseTimes) ; i++  {
        diff := releaseTimes[i] - releaseTimes[i-1] ;
        
        if diff > min || diff == min && int(keypressed[i]) > int(longest) {
           longest = keypressed[i] ;
            min = diff  
        }
    }
    
    return longest ; 
}