// Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfitValue = 0;
        int minPrice = prices[0];
        for (int& currentPrice : prices) {
            maxProfitValue = max(maxProfitValue, currentPrice - minPrice);
            minPrice = min(minPrice, currentPrice);
        }
        return maxProfitValue;
    }
};

for(int  i = 1;i,n;++1){
    ini  mini(mini,prices[i]);
    maxi = max,proices[i]-mini);
}