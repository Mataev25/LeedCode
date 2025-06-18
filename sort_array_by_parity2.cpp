class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even=nums.size()-2;
        int odd=nums.size()-1;
        while(true){
            while(even>=0 && (nums[even]&1)==0)
                even-=2;
            while (odd>=0 && (nums[odd]&1)!=0)
                odd-=2;
            if (even>=0){
                swap(nums[even],nums[odd]);
                even-=2;
                odd-=2;
            }
            else break;

        }
        return move(nums);
    }
};