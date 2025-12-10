#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxJump(vector<int>& stones) {
        int n = stones.size();
        int max_jump = stones[1]-stones[0];
        if(n==2) return max_jump;
        for(int i=2;i<n;i++){
            max_jump = max(max_jump,stones[i]-stones[i-2]);
        }
        return max_jump;
    }
};
int main() {
    
    return 0;
}