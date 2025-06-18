class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int lo=0, hi=nums.size()-1, min_ans=-1;
        int mi;
        while(lo<=hi){
            mi=lo+(hi-lo)/2;
            if (nums[mi]>target) hi=mi-1;
            else if (nums[mi]<target) lo=mi+1;
            else{
                min_ans=mi;
                hi=mi-1;
            }
        }
        lo=0, hi=nums.size()-1;
        int max_ans=-1;
        while(lo<=hi){
            mi=lo+(hi-lo)/2;
            if (nums[mi]>target) hi=mi-1;
            else if(nums[mi]<target) lo=mi+1;
            else{
                max_ans=mi;
                lo=mi+1;
            }
        }
        return {min_ans, max_ans};
    }
};