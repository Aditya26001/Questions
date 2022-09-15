class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sell;
        int i;
        
        int maxp = 0;
        
        for(i = 1 ;i<prices.size();i++){
             if(prices[i]<buy)
                buy = prices[i];

               else{
            
            maxp = max(prices[i] - buy , maxp);
               }
        }
        return maxp;
    }
};