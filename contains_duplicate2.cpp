class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> last_idx;
        for (int i=0; i<nums.size(); i++){
            int num=nums[i];
            if (last_idx.count(num) && i - last_idx[num] <= k)
                return true;
            last_idx[num]=i;
        }
        return false;
    }
};