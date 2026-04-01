class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currentlowest=INT_MAX;
        int profit;
        int maxprofit=INT_MIN;
        for(int i=0;i<prices.size();i++){
            currentlowest=min(prices[i],currentlowest);
            profit=prices[i]-currentlowest;
            maxprofit=max(profit,maxprofit);
        }
        return maxprofit;
    }
};