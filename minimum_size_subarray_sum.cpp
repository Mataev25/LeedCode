class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0, sum=0, mn_len=INT_MAX;
        for (int r=0; r<nums.size(); r++){
            sum += nums[r];
            while(sum >= target){
                mn_len = min(mn_len, r-l+1);
                sum -= nums[l];
                l++;
            }
        }
        return mn_len != INT_MAX ? mn_len : 0;
    }
};