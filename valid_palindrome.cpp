class Solution {
public:
    bool isPalindrome(string& s) {
        s.erase(remove_if(s.begin(), s.end(),
            [](char c) { return !isalnum(c); }), s.end());

        for (char& c : s) {
            if ('A' <= c && c <= 'Z')
                c += 32;
        }

        if (s.empty())
            return true;

        auto left = s.begin();
        auto right = s.end() - 1;
        if (left == right)
            return true;

        for (left; left < right;) {
            if (*left == *right) {
                ++left;
                --right;
            }
            else
                return false;
        }
        return true;
    }
};