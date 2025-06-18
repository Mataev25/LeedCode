class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};
        vector<string> letters{
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"     
        };
        vector<string> set{1,""};
        for (char digit:digits){
            vector<string> newSet;
            for (const string& prefix:set){
                for (char letter:letters[digit-'2']){
                    newSet.push_back(prefix+letter);
                }
            }
            newSet.swap(set);
        }
        return set;
    }
};