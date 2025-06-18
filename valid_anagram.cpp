class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> a, b;
        for (int i = 0; i < s.size(); i++) {
            a[s[i]]++;
            b[t[i]]++;
        }

        for (auto& it : a) {
            if (b.count(it.first)) {
                if (b[it.first] != it.second)
                    return false;
            }
            else return false;
        }
        return true;
    }
};