//https://leetcode.com/problems/min-stack/

#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    vector<pair<int,int>> ans;
    MinStack() {
        
    }
    
    void push(int val) {
        if(ans.empty()) ans.push_back({val,val});
        else ans.push_back({val,min(ans.back().second,val)});
    }
    
    void pop() {
        ans.pop_back();
    }
    
    int top() {
        return ans.back().first;
    }
    
    int getMin() {
        return ans.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */