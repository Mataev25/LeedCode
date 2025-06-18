class Solution {
public:
    bool canJump(vector<int>& nums) {
        int next_max=0, cur_max=0;
        for (int i=0; i<nums.size()-1; i++){
            next_max=max(next_max, i+nums[i]);
            if (i==cur_max)
                cur_max=next_max;
            if (cur_max >= nums.size()-1)
                return true;
            else if (cur_max <= i)
                return false;
        }
        return 1;
    }
};