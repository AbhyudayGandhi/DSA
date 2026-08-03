class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;
        int bestbuy=prices[0]; 
        for (int i=0; i<prices.size(); i++){
            mp=max(mp,prices[i]-bestbuy);
            bestbuy=min(bestbuy,prices[i]);
        }
        return mp;
    }
};