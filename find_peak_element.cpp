class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s=nums.size();
        if (s==1) return 0;
        else if (nums[0]>nums[1])
            return 0;
        else if (nums[s-1]>nums[s-2])
            return s-1;
        int lo=1, hi=s-2, mi;
        while(lo<=hi){
            mi=lo+(hi-lo)/2;
            if (nums[mi]>nums[mi-1] && nums[mi]>nums[mi+1])
                return mi;
            else if (nums[mi]<nums[mi-1])
                hi=mi-1;
            else 
                lo=mi+1;
        }
        return 0;
    }
};