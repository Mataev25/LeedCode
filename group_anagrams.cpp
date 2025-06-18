class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group_idx;
        int idx_l = 0;
        for (const string& s : strs) {
            string tmp = s;
            sort(tmp.begin(), tmp.end());
            group_idx[tmp].push_back(s);
            
        }

        vector<vector<string>> ans;
        for (const auto& it : group_idx) {
            ans.push_back(it.second);
        }
        return ans;
    }
};