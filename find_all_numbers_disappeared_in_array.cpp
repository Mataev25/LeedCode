class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> arr(nums.size()+1);
        for (int e : nums)
            arr[e]++;
        vector<int> ans;    
        for (int i=1; i<=nums.size(); ++i)
            if (arr[i]==0)
                ans.push_back(i); 
        return ans;        
    }
};