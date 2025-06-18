class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size()==0 || prices.size()==1)
            return 0;
        int ans=0, tmp=prices[0], sum_ans=0;
        for (int i=1; i<prices.size(); i++){
            if (prices[i]-tmp>0){
                if (prices[i]-prices[i-1]>0)
                    sum_ans += prices[i]-prices[i-1];         
                ans=max(ans, prices[i]-tmp);
                ans=max(ans, sum_ans);
            }
            else
                tmp=prices[i];
        }
        return ans;
    }
};