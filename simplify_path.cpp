class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        stringstream ss(path);
        string cmpt;
        while (getline(ss, cmpt, '/')) {
            if (cmpt.empty() || cmpt == ".")
                continue;
            if (cmpt == "..") {
                if (!st.empty())
                    st.pop_back();
            }
            else
                st.push_back(cmpt);
            
        }
        string ans;
        for (const string& dir : st) 
            ans += "/" + dir;
        return ans.empty() ? "/" : ans;
    }
};