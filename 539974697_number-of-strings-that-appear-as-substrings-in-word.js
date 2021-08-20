id = 539974697 
lang = javascript 
runtime  = 76 ms 
memory = 39.7 MB
title_slug = number-of-strings-that-appear-as-substrings-in-word
code =

 /**
 * @param {string[]} patterns
 * @param {string} word
 * @return {number}
 */
var numOfStrings = function(patterns, word) {
    let cnt = 0 ;
    patterns.forEach(val => {
        if(word.indexOf(val) >= 0 )
            {
                cnt ++ ;
            }
    })
    
    return cnt ;
};