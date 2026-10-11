class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minimumPrize=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minimumPrize){
                minimumPrize=prices[i];
            }
            if(profit<(prices[i]-minimumPrize)){
                profit=prices[i]-minimumPrize;
            }
        }
        if(profit>0){
            return profit;
        }
        return 0;
    }
};