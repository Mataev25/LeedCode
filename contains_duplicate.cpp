class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> numb;
        for (int e : nums)
            numb[e]++;
        for (auto e : numb){
            if (e.second>1) return true;
        }  
        return false;  
    }
};