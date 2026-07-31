class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;
        int bestbuy=prices[0]; 
        for (int i=0; i<prices.size(); i++){
            if (prices[i]-bestbuy > mp) mp=prices[i]-bestbuy;
            if (bestbuy>prices[i]) bestbuy=prices[i];
        }
        return mp;
    }
};