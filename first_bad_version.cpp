// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lo=0, hi=n, ans=-1;
        int mi;
        while(lo<=hi){
            mi=lo+(hi-lo)/2;
            if (isBadVersion(mi)){
                ans=mi;
                hi=mi-1;
            }
            else lo=mi+1; 
        }
        return ans;
    }
};