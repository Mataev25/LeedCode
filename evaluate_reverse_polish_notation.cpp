class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> ans;
        for (const string& s : tokens) {
            if (s != "+" && s != "-" && s != "*" && s != "/") {
                ans.push(stoi(s));
            }
            else {
                    int x2 = ans.top();
                    ans.pop();
                    int x1 = ans.top();
                    ans.pop();
                    switch (s[0]) {
                    case '+':
                        ans.push(x1 + x2);
                        break;
                    case '-':
                        ans.push(x1 - x2);
                        break;
                    case '*':
                        ans.push(x1 * x2);
                        break;
                    case '/':
                        ans.push(x1 / x2);
                        break;
                    }
                
                }
        }
        return ans.top();
    }
};