class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo=0, hi=nums.size()-1, ans=-1;
        int mi;
        while(lo<=hi){
            mi=lo+(hi-lo)/2;
            if (nums[mi]>nums[nums.size()-1]) lo=mi+1;
            else if (nums[mi]<nums[nums.size()-1]){
                ans=mi;
                hi=mi-1;
            } 
            else {
                ans=mi;
                hi=mi-1;
            }
            
        }
        return nums[ans];
    }
};