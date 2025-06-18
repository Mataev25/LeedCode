class Solution {
public:
    int maxSubArray(vector<int>& a) {
	    int res = a[0], sum = a[0];
	    for (int i = 1; i < a.size(); i++) {
		    sum = max(sum + a[i], a[i]);
		    res = max(res, sum);
	    }
	    return res;
    }
};