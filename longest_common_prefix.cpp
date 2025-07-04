class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int k = strs.size()-1;
        string ans = "";
        for (int i = 0; i < strs[0].size(); ++i){
            if (strs[0][i] == strs[k][i])
                ans += strs[0][i];
            else break;
        }
        return ans;
    }
};