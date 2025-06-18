class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> conf_s, conf_t;
        for (int i = 0; i < s.size(); i++) {
            char st=s[i];
            char tt=t[i];
            if (conf_s.count(s[i])) {
                if (conf_s[st] != tt)
                    return false;
            }
            else
                conf_s[st] = tt;
            
            if (conf_t.count(tt)) {
                if (conf_t[tt] != st)
                    return false;
            }
            else
                conf_t[tt] = st;
        }
        return true;
    }
};