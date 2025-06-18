class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        uint a[52]={0};
        const char* p = magazine.c_str();
        for (int i=0; i<magazine.size(); i++)
            a[p[i]-'a']++;
        const char* pt=ransomNote.c_str();
        for (int i=0; i<ransomNote.size(); i++){
            int idx=pt[i]-'a';
            if (a[idx]-- <= 0)
                return false;
        }
        return true;
    }
};