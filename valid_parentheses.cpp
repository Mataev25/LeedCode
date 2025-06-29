class Solution {
public:
    bool isValid(const string& s) {
        stack<char, vector<char>> st;
        for (char c : s ){
            if (c == '(')
                st.emplace(')');
            else if (c == '{')
                st.emplace('}');
            else if (c == '[')
                st.emplace(']');
            else{
                if (st.empty())
                    return false;
                if (st.top() != c)
                    return false;
                st.pop();
            } 
        }
        return st.empty();
    }
};