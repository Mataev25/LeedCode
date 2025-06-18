class Solution {
public:
        bool lemonadeChange(vector<int>& a) {
        int bucks_5 = 0, bucks_10 = 0, bucks_20 = 0;
        bool ans = false;
        int change = 0;
        for (int e : a) {
            if (e == 5)
                ++bucks_5;
            if (e == 10)
                ++bucks_10;
            if (e > 5) {
                change = e - 5;
                int i = 0;
                while (change > 0 && i < 3) {
                    if (10 <= change && bucks_10 > 0) {
                        change -= 10;
                        --bucks_10;
                    }
                    else if (5 <= change && bucks_5 > 0) {
                        change -= 5;
                        --bucks_5;
                    }
                    else
                        ++i;
                }
                if (change == 0)
                    ans = true;
                else {
                    ans = false;
                    break;
                }
            }
        }
        return ans;
    }
};