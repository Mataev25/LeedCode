class Solution {
public:
    string toLowerCase(string& s) {
        for (int i=0; i<s.size(); i++)
            if ('A' <= s[i] && s[i] <= 'Z')
                s[i]=char((int)s[i]+32);
        return s;
    }
};