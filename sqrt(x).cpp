class Solution {
public:
    int mySqrt(int x) {
        int left = 0, right = x;
        long long tmp;
        while (left <= right){
            tmp=(left + right) / 2;
            if (tmp * tmp > x)
                right = tmp - 1;
            else if (tmp * tmp < x)
                left = tmp + 1;
            else return tmp;            
        }
        return right;
    }
};