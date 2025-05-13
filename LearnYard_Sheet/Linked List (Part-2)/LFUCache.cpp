#include <bits/stdc++.h>
using namespace std;
//least frequently used matlab jo sabse kam baar use kiya gayaa ho

class LFUCache {
    public:
        int cap;
        int size;
        //{key,value,counter}
        map<int,list<vector<int>>> freq;
        //{key,node address}
        unordered_map<int, list<vector<int>>::iterator> mp;
    
        LFUCache(int capacity) {
            cap = capacity;
            size = 0;
        }
        void makeMostFrequentlyUsed(int key){
            auto &vec = (*(mp[key]));
            int value = vec[1];
            int f = vec[2];
            freq[f].erase(mp[key]);
            if(freq[f].empty()){
                freq.erase(f);
            }
            f++;
            freq[f].push_front(vector<int>({key,value,f}));
            mp[key] = freq[f].begin();
        }
        int get(int key){
            if(mp.find(key)==mp.end()) return -1;
            auto &vec = (*(mp[key]));
            int value = vec[1];
            makeMostFrequentlyUsed(key);
            return value;
    
        }
        void put(int key, int value) {
             if(cap==0) return;
             if(mp.find(key)!=mp.end()){
                auto &vec = (*(mp[key]));
                vec[1] = value;
                makeMostFrequentlyUsed(key);
             }
             else if(size<cap){
                size++;
                freq[1].push_front(vector<int>({key,value,1}));
                mp[key] = freq[1].begin();
             }
             else{
                auto &reqList = freq.begin()->second;
                int reqKey = (reqList.back())[0];
                reqList.pop_back();
                if(reqList.empty()){
                    freq.erase(freq.begin()->first);
                }
                freq[1].push_front(vector<int>({key, value, 1}));
                mp.erase(reqKey);
                mp[key] = freq[1].begin();
             }
        }
    };
int main() {
    
    return 0;
}