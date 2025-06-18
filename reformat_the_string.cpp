class Solution {
public:
    string reformat(string s) {
        string letters;
        string digits;
        string ans;
        for (int i=0; i<s.size(); i++){
            if ((s[i]-'0')/10 != 0)
                letters += s[i];
            else
                digits += s[i];
        }
        const int l = letters.size();
        const int d = digits.size();
        if (abs(l-d)<=1){
            if (l>d){
                int i=0;
                while (i<d){
                    ans += letters[i];
                    ans += digits[i];
                    i++;
                }
                ans += letters[i];
            }
            else if (l<d){
                int i=0;
                while (i<l){
                    ans += digits[i];
                    ans += letters[i];
                    i++;
                }
                ans += digits[i];
            }
            else {
                int i=0;
                while (i<l){
                    ans += digits[i];
                    ans += letters[i];
                    i++;
                }
            }
        }
        else ans = "";
        return ans;
    }
};