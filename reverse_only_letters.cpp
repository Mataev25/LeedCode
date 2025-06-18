class Solution {
public:
    bool isLetters(char c){
        return ('a'<=c && c<='z') || ('A'<=c && c<='Z');
    }
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=(int)s.size()-1;
        while(true){
            while(i<j && !isLetters(s[i]))
                ++i;
            while (i<j && !isLetters(s[j]))
                --j;
            if (i<j){
                swap(s[i],s[j]);
                ++i;
                --j;
            }
            else break;
        }
        return move(s);
    }
};