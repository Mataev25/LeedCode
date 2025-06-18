class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int tmp_sum=nums[0]+nums[1]+nums[2];
        int sum=0;
        int front,back;
        for (int i=0;i<nums.size();++i){
            front=i+1;
            back=nums.size()-1;
            while(front<back){
                sum=nums[front]+nums[back]+nums[i];
                if (abs(sum-target)<=abs(tmp_sum-target))
                    tmp_sum=sum;
                if (sum>target)
                    back--;
                else if (sum<target)
                    front++;
                else return sum;

            }
        }
        return tmp_sum;
    }
};