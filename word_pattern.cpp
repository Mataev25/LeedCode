class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> conf_p;
        unordered_map<string, char> conf_s;
        int idx = 0;
        int word_count = 0;

        for (int i = 0; i < pattern.size(); i++) {
            if (idx == s.size()) return false;  

            char c = pattern[i];
            string tmp="";
            while (idx < s.size() && s[idx] != ' ') {
                tmp += s[idx];
                idx++;
            }
            word_count++;

            if (idx < s.size() && s[idx] == ' ') idx++;
            if (conf_p.count(c)) {
                if (conf_p[c] != tmp) return false;
            }
            else {
                conf_p[c] = tmp;
            }

            if (conf_s.count(tmp)) {
                if (conf_s[tmp] != c) return false;
            }
            else {
                conf_s[tmp] = c;
            }
        }
        return idx == s.size() && word_count == pattern.size();
    }
};