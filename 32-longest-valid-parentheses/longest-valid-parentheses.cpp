#include <string>
#include <stack>
#include <algorithm>

class Solution {
public:
    int longestValidParentheses(std::string s) {
        std::stack<int> st;
        st.push(-1); // Base for length calculation
        int max_len = 0;
        
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (st.empty()) {
                    st.push(i); // New base for next valid substrings
                } else {
                    max_len = std::max(max_len, i - st.top());
                }
            }
        }
        
        return max_len;
    }
};
