class Solution {
public:
    int maxProfit(vector<int>& p) {
        int cash[3]={0};
        int hold[3]={0};
        for (int c=0; c<=2; ++c){
            hold[c] = -p[0];
        }
        for (int i=1; i<p.size(); ++i){
            for (int c=1; c<=2; ++c){
                cash[c]=max(cash[c], hold[c]+p[i]);
                hold[c]=max(hold[c], cash[c-1]-p[i]);
            }
        }
        return cash[2];
    }
};