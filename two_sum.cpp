class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {
        unordered_map<int,int> value_index;
        for (int i=0;i<nums.size();++i){
            auto it=value_index.find(target - nums[i]);
            if (it!=value_index.end()){
                return {it->second,i};
            }
            value_index[nums[i]]=i;
        }
        throw invalid_argument("sum not found");
    }
};