/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack {
public:

    stack<int> s;
    stack<int> v;
    // int min_val;

    /** initialize your data structure here. */
    MinStack() {}
    
    void push(int x) {
        s.push(x);
        v.push(!v.empty() ? min(v.top(), x) : x);
    }
    
    void pop() {
        s.pop();
        v.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return v.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

