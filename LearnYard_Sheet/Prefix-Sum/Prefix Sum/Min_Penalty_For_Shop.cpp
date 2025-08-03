#include <bits/stdc++.h>
using namespace std;
int bestClosingTime(string s) {
        int n = s.length();
        vector<int> leftNo(n+1);
        vector<int> rightYes(n+1);
        leftNo[0] = 0;
        rightYes[n] = 0;
        for(int i=1;i<n+1;i++){
            if(s[i-1]=='N'){
                leftNo[i] = leftNo[i-1]+1;
            }
            else{
                leftNo[i] = leftNo[i-1];
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='Y') rightYes[i] = rightYes[i+1]+1;
            else rightYes[i] = rightYes[i+1];
        }
        int minPenaltyIndex = -1;
        int minPenalty = INT_MAX;
        for(int i=0;i<=n;i++){
            int penalty = leftNo[i]+rightYes[i];
            if(penalty<minPenalty){
                minPenaltyIndex = i;
                minPenalty = penalty;
            }
        }
        return minPenaltyIndex;
    }
int main() {
    string s = "YYNY";
    int result = bestClosingTime(s);
    cout << "Best closing time: " << result << endl; // Output: 2
    return 0;
}