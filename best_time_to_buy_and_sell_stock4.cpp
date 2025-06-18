class Solution {
public:
    int maxProfit(int k, vector<int>& p) {
        vector<int> cash(k+1,0);
        vector<int> hold(k+1,0);
        for (int c=0; c<=k; ++c){
            hold[c]=-p[0];
        }
        for (int i=1; i<p.size(); ++i){
            for (int c=1; c<=k; ++c){
                cash[c]=max(cash[c], hold[c]+p[i]);
                hold[c]=max(hold[c], cash[c-1]-p[i]);
            }
        }
        return cash[k];
    }
};