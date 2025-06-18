class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(true){
            while(i<j && (nums[i] & 1) == 0)
                i++;
            while (i<j && (nums[j] & 1) != 0)
                j--;
            if (i<j){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }  
            else break;      
        }
        return move(nums);
    }
};