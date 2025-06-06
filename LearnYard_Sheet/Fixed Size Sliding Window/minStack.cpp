// leetcode 155
#include <bits/stdc++.h>
using namespace std;
class MinStack {
    public:
        stack<int> stk;
        stack<int> minstk;
        MinStack() {
        }
        
        void push(int val) {
            if(minstk.empty() || minstk.top()>=val){
                minstk.push(val);
            }
            stk.push(val);
        }
        
        void pop() {
            if(stk.top()==minstk.top()){
                minstk.pop();
    
            }
            stk.pop();
        }
        
        int top() {
            return stk.top();
        }
        
        int getMin() {
            return !minstk.empty()?minstk.top():0;
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
int main() {
    
    return 0;
}