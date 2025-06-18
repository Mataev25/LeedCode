class Solution {
public:
    string reverseWords(string& s) {
        while (!s.empty() && isspace(s.front())) s.erase(0, 1);
        while (!s.empty() && isspace(s.back())) s.pop_back();

        bool f = false;
        auto rcd = s.begin(); //запись
        for (auto rdg = s.begin(); rdg != s.end(); ++rdg) {
            if (*rdg != ' ') {
                *rcd++ = *rdg;
                f = true;
                continue;
            }
            if (f) {
                *rcd++ = *rdg;
                f = false;
            }
        }
        s.erase(rcd, s.end());

        for (int i = 0; i < s.size()/2; i++) {
            char tmp = s[s.size() - 1 - i];
            s[s.size() - 1 - i] = s[i];
            s[i] = tmp;
        }
        
        int ws = 0;
        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                for (int j = 0; j < (i - ws) / 2; j++) {
                    char tmp = s[i - 1 - j];
                    s[i - 1 - j] = s[ws + j];
                    s[ws + j] = tmp;
                }
                ws = i + 1;
            }
        }
        return s;
    }
};