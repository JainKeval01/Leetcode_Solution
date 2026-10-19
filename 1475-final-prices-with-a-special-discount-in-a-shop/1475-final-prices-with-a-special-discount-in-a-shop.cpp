class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        for(int i=0;i<prices.size();i++){
            bool f=false;
            for(int j = i+1 ; j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    int temp=prices[i]-prices[j];
                    ans.push_back(temp);
                    f=true;
                    break;
                }
            }
            if(f==false){
                ans.push_back(prices[i]);
            }
        }
        return ans;
        
    }
};