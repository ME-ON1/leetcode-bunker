id = 609777783 
lang = javascript 
runtime  = 68 ms 
memory = 39 MB
title_slug = compare-version-numbers
code =

 /**
 * @param {string} version1
 * @param {string} version2
 * @return {number}
 */
var compareVersion = function(version1, version2) {
    
    const a = version1.split(".")
    const b = version2.split(".")

    
    for(let  i = 0; i < Math.max(a.length, b.length) ; i++ ) {
        // if(b[i ] == undefined ) b[i ] = 0; 
        
        let p = Number(a[i]) || 0;
        let q = Number(b[i]) || 0 ;
        
        if(p > q ){
            return 1; 
        } 
        if(q > p) {
            return -1 ;
        }
    } 
    return 0; 
};