class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lt_sbl;
        int l=0, mx_len=0;
        for (int r=0; r<s.size(); r++){
            if (lt_sbl.count(s[r])){
                l=max(l,lt_sbl[s[r]]+1);
            }
            lt_sbl[s[r]]=r;
            mx_len=max(mx_len, r-l+1);
        }
        return mx_len;
    }
    
};