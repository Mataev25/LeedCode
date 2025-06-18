class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.empty())
            return 1;
        if (s.empty() && t.empty())
            return 1;
        auto it = s.begin();
        for (int i=0; i< t.size(); i++){
            if (*it == t[i])
                it++;
        }
        if (it == s.end())
            return 1;
        else
            return 0;
    }
};