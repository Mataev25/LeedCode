class Solution {
public:
    int minOperations(string s) {
        const int n = s.size();
        int ans = n;
        int res=0;
        for (int i=0; i<n; i++){
            res += i/1 % 2 != s[i]-'0';
        }
        ans=min(ans, min(res, n-res));
        return ans;
    }
};