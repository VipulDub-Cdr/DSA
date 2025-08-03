//leetcode 138
#include <bits/stdc++.h>
using namespace std;

class MyHashMap {
    public:
        vector<list<pair<int,int>>> buckets;
        int size = 10000;
        MyHashMap() {
            buckets.resize(size);
        }
        
        void put(int key, int value) {
            int index = key%size;
            auto &chain = buckets[index];
            for(auto &it:chain){
                if(it.first==key){
                    it.second = value;
                    return;
                }
            }
            chain.push_back({key,value});
        }
        
        int get(int key) {
            int index = key%size;
            auto chain = buckets[index];
            if(chain.empty()) return -1;
            for(auto it:chain){
                if(it.first ==key){
                    return it.second;
                }
            }
            return -1;
        }
        
        void remove(int key) {
            int index = key%size;
            auto &chain = buckets[index];
            for(auto it=chain.begin();it!=chain.end();it++){
                if(it->first==key){
                    // using simple for loop just because we have to use .erase
                    chain.erase(it);
                    //it invalidates the iterator therefore need to return 
                    return;
                }
            }  
        }
};
    

int main() {
    
    return 0;
}
