class Solution {
public:
    int romanToInt(string s) {
        int res=0, prev=0;
        for (int i=s.size()-1; i>=0; i--){
            int cur;
            switch (s[i]) {
            case 'I': cur = 1; break;
            case 'V': cur = 5; break;
            case 'X': cur = 10; break;
            case 'L': cur = 50; break;
            case 'C': cur = 100; break;
            case 'D': cur = 500; break;
            case 'M': cur = 1000; break;
            }
            if (cur < prev)
                res -= cur;
            else
                res += cur;
            prev=cur;
        }
        return res;
    }
};