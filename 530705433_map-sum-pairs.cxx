id = 530705433 
lang = cpp 
runtime  = 4 ms 
memory = 7.8 MB
title_slug = map-sum-pairs
code =
 ```class MapSum {
private : 
    map<string, int > mp; 
public:
    /** Initialize your data structure here. */
    
    MapSum() {
        // map<string , int >/ mp;
    }
    
    void insert(string key, int val) {
        this->mp[key] = val ;
    }
    
    int sum(string prefix) {
        // auto itr = map<stirng, int>::iterator ;
        int sum = 0 ;
        for(auto i : this->mp) 
        {
            string n = i.first.substr(0, prefix.size() ) ;
            if(n == prefix )
                sum += i.second;
                
        }
        return sum ; 
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */```