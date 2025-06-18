class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> a;
        int ans_max = 0;
        for (int e : nums) {
            a.emplace(e);
        }
        for (int e : a) {
            if (a.count(e - 1) == 0) {
                int cur = e;
                int cnt = 1;
                while (a.count(cur + 1)) {
                    cur++;
                    cnt++;
                }
                ans_max = max(ans_max, cnt);
            }
            
        }
        return ans_max;	
    }
};