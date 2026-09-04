class MinStack {
public:
    stack<int>sstack;
    stack<int>minstack;
    MinStack() {}
    
    void push(int val) {
        sstack.push(val);
        val=min(val,minstack.empty()?val:minstack.top());
        minstack.push(val);
    }
    
    void pop() {
        sstack.pop();
        minstack.pop();
    }
    
    int top() { 
        return sstack.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};
