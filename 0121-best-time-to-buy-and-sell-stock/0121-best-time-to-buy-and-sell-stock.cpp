class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestday = 0 ; int buy = prices[0];
        for(int i = 0 ; i < prices.size() ; i++){
            if(bestday <= prices[i]){
                bestday = max(bestday , prices[i]-buy);
            }
            buy = min(buy , prices[i]);
        }
    return bestday;
    }
};