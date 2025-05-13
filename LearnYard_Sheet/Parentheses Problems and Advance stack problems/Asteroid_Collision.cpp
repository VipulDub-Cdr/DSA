#include <bits/stdc++.h>
using namespace std;
vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> stk;
    for(auto size: asteroids){
        if(stk.empty() or size>0){
            stk.push(size);
        }
        else{
            while(!stk.empty() and stk.top()>0 and abs(size)>stk.top()){
                stk.pop();
            }
            if(!stk.empty() and stk.top()>0 and abs(size)==stk.top()){
                stk.pop();
            }
            else if(stk.empty() or stk.top()<0){
                stk.push(size);
            }
        }
    }
    vector<int> result;
    while(!stk.empty()){
        result.push_back(stk.top());
        stk.pop();
    }
    reverse(begin(result),end(result));
    return result;

}
int main() {
    vector<int> asteroids = {10,-2,5};
    vector<int> result = asteroidCollision(asteroids);
    for(auto it : result){
        cout<<it<<endl;
    }
    return 0;
}