class Solution {
public:
    int jump(vector<int>& nums) {
        int cur_max=0, next_max=0, cnt=0;
        for (int i=0; i<nums.size()-1; i++){
            next_max=max(next_max, i+nums[i]);
            if (i==cur_max){
                cur_max=next_max;
                ++cnt;
                if (cur_max >= nums.size()-1)
                    return cnt;
            }
        }
        return cnt;
    }
};