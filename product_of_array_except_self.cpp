class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        ans.reserve(nums.size());
        int pr=1;
        for (int i=0; i<nums.size(); i++){
            ans[i]=pr;
            pr *= nums[i];
        }
        int sf=1;
        for (int i=nums.size()-1; i>=0; i--){
            ans[i] *= sf;
            sf *= nums[i];
        }
        return ans;
    }
};