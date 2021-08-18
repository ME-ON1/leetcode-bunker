id = 468008578 
lang = cpp 
runtime  = 0 ms 
memory = 6.3 MB
title_slug = valid-parentheses
code =
 ```class Solution {
public:
    bool isValid(string st) {
        stack<char> s; 
    char x; 
  
    for (int i = 0; i < st.length(); i++)  
    { 
        if (st[i] == '(' || st[i] == '['
            || st[i] == '{')  
        { 
            s.push(st[i]); 
            continue; 
        } 
  
        if (s.empty()) 
            return false; 
  
        switch (st[i]) { 
        case ')': 
              
            x = s.top(); 
            s.pop(); 
            if (x == '{' || x == '[') 
                return false; 
            break; 
  
        case '}': 
  
            x = s.top(); 
            s.pop(); 
            if (x == '(' || x == '[') 
                return false; 
            break; 
  
        case ']': 
  
            x = s.top(); 
            s.pop(); 
            if (x == '(' || x == '{') 
                return false; 
            break; 
        } 
    } 
    return (s.empty()); 
    }
    };```