class Solution {
public:
    int arrangeCoins(int n) {
        int lo=1, hi=pow(2,31)-1, ans=-1;
        int mi;
        while(lo<=hi){
            mi=lo+(hi-lo)/2;
            if ((double)(1+mi)/2*mi<=n){
                ans=mi;
                lo=mi+1;
            }
            else hi=mi-1;
        }
        return ans;
    }
};