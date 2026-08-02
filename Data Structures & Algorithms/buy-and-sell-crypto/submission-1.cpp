class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int mini = prices[0];
        int i=0;
        int j = 1;

        while(j<prices.size())
        {
            if(prices[j]<prices[i])
            {
                i=j;
                j++;


            }
            else {
                ans = max(ans , prices[j]-prices[i]);
                j++;
            }
        }
       
        return ans;
    }
};
