class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int lo=0, hi=letters.size()-1, ans=-1;
        int mi;
        while(lo<=hi){
            mi=lo+(hi-lo)/2;
            if (letters[mi]<target) lo=mi+1;
            else if (letters[mi]>target){
                ans=mi;
                hi=mi-1;
            }
            else lo=mi+1;
        }
        if (ans==-1) return letters[0];
        return letters[ans];
    }
};