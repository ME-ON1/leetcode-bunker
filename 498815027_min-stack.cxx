id = 498815027 
lang = cpp 
runtime  = 24 ms 
memory = 16.4 MB
title_slug = min-stack
code =
 ```class MinStack {
public:
    /** initialize your data structure here. */
    stack<pair<int,int>> s ;
    
    int min; 
    MinStack() { 
    }
    
    void push(int val) {
        // this->s.push(val) ;
        if(this->s.size() == 0 ){
            this->min = val ; 
            this->s.push({val, val}) ;
        }else {
            int m = this->s.top().second ;
            this->s.push({val , std::min(m, val )});
        }
    }
    
    void pop() {
        this->s.pop() ;
    }
    
    int top() {
        return this->s.top().first ;
    }
    
    int getMin() {
        return this->s.top().second ;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */```