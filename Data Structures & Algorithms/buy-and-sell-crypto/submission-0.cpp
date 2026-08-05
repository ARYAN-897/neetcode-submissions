class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0,bestBuy=prices[0];
        for(int i=1;i<prices.size();i++){
            bestBuy=min(bestBuy,prices[i]);
            maxProfit=max(maxProfit,prices[i]-bestBuy);
        }
    return maxProfit;
    }
};
