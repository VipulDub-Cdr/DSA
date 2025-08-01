#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
    int n = prices.size();

    int maxProfit = prices[0];
    int minPrice = 0;
    
    for(int i=1;i<n;i++){
        int price = prices[i];

        minPrice = min(minPrice,price);

        int currentProfit = price - minPrice;

        maxProfit = max(maxProfit,currentProfit);
    }
    return maxProfit;
}

int main(){
    return 0;
}