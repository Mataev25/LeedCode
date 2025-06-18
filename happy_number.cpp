class Solution {
public:
    int sqr_amt(int n){
        int sum=0;
        while(n){
            int tmp = n % 10;
            tmp *= tmp;
            sum += tmp;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        while(true){
            if (n == 1) return true;
            if (n == 4) return false;
            n = sqr_amt(n);
        }
    }
};