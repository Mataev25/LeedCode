class Solution {
public:
    int FindMinIndex(vector<int>& a){
        int lo=0, hi=a.size()-1, ans=-1;
        int mi;
        while(lo<=hi){
            mi=lo+(hi-lo)/2;
            if (a[mi]<a[a.size()-1]){
                ans=mi;
                hi=mi-1;
            }
            else if (a[mi]>a[a.size()-1])
                lo=mi+1;
            else{
                ans=mi;
                hi=mi-1;
            }
        }
        return ans;
    }

    int BinarySearch(vector<int>& b, int target, int lo, int hi){
        int mi;
        while(lo<=hi){
            mi=lo+(hi-lo)/2;
            if (b[mi]>target) hi=mi-1;
            else if (b[mi]<target) lo=mi+1;
            else return mi;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int x=FindMinIndex(nums);
        if (nums[nums.size()-1]>=target) return BinarySearch(nums,target, x, nums.size()-1);
        return BinarySearch(nums, target, 0, x-1);
    }
};