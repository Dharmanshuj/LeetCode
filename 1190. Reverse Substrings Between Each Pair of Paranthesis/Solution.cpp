class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string temp = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(temp);
                temp = "";
            } else if (s[i] == ')') {
                string revTemp = temp;
                reverse(revTemp.begin(), revTemp.end());
                temp = st.top() + revTemp;
                st.pop();
            } else {
                temp += s[i];
            }
        }
        return temp;
    }
};
