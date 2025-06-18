class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total=0, cur=0, start=0;
        for (int i=0; i<gas.size(); i++){
            int d = gas[i]-cost[i];
            total += d;
            cur += d;
            if (cur <= 0){
                cur = 0;
                start=i+1;
            }
        }
        return (total >= 0) ? start % gas.size() : -1;
    }
};