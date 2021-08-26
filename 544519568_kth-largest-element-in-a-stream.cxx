id = 544519568 
lang = cpp 
runtime  = 46 ms 
memory = 19.7 MB
title_slug = kth-largest-element-in-a-stream
code =

 class KthLargest {
public:
    priority_queue<int , vector<int> , greater<int> > q;
    int c ; 
    KthLargest(int k, vector<int>& nums) {
        
        for(auto i : nums) 
        {
            q.push(i) ;
            if( q.size() > k ) 
            {
                q.pop( ) ;
            }
        }
        this->c = k ; 
    }
    
    int add(int val) {
        this->q.push(val) ;
        if (this->q.size() > this->c ) 
        {
            this->q.pop() ;
        }
        return q.top() ;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */