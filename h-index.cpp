class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int ans=0;
        for (int i=0;i<citations.size(); i++){
            if (citations[i]>=citations.size()-i){
                ans=citations.size()-i;
                break;
            }
        }
        return ans;
    }
};