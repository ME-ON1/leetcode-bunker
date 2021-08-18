id = 511893481 
lang = golang 
runtime  = 0 ms 
memory = 6.7 MB
title_slug = largest-odd-number-in-string
code =
 ```func largestOddNumber(num string) string {
    for i := len(num) -1  ; i >= 0 ; i--  {
        if (num[i] - '0') % 2 != 0 {
            fmt.Println(num[i] - '0')
            return num[0:i +1]
        }
    }
    return ""
}```