class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0 || prices.size() == 1)
	        return 0;
        int ans = 0, tmp = prices[0];
        for (int i = 1; i < prices.size(); i++) {
	        if (prices[i] - tmp > 0)
		        ans = max(ans, prices[i] - tmp);
	        else
		        tmp = prices[i];
        }
    return ans;
    }
};