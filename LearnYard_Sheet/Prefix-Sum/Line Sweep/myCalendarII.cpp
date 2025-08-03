#include <bits/stdc++.h>
using namespace std;
class MyCalendarTwo {
    public:
        //time,count
        map<int,int> timeline;
        bool book(int startTime, int endTime) {
            timeline[startTime]+=1;
            timeline[endTime]-=1;
            int prefixSum = 0;
            for(auto [time,count]:timeline){
                prefixSum+=count;
                if(prefixSum>=3){
                    timeline[startTime]-=1;
                    timeline[endTime]+=1;
                    return false;
                }
            }
            return true;
        }
    };
int main() {
    
    return 0;
}