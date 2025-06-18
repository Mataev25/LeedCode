class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int leght=0;
        int right=nums.size()-1;
        int mi;
        while(leght<=right){
            mi=leght+(right-leght)/2;
            if(nums[mi]==target) return mi;
            else if (nums[mi]>target) {
                right=mi-1;
                //--mi;
                }
            else if (nums[mi]<target) {
                leght=mi+1;
                ++mi;
                }
        }
        if (mi<0) return 0;
        return mi;
        
    }
};