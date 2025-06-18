class Solution {
public:
    bool isPalindrome(int x) {  
        if (x < 0) return 0;
        int ans = 0, tmp = x;
        while (tmp > 0){
            int d = tmp % 10;
            tmp /= 10;
            if (ans < INT_MAX / 10 || (ans == INT_MAX / 10 &&
                d <= INT_MAX % 10))
                ans = ans * 10 + d % 10;
            else return false;
        }
        return ans==x;
    }
};