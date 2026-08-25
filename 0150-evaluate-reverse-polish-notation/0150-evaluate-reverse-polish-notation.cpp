class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        for (int i = 0; i < tokens.size(); i++) {

            // Number
            if (tokens[i] != "+" && tokens[i] != "-" &&
                tokens[i] != "*" && tokens[i] != "/") {

                st.push(stoi(tokens[i]));
            }

            // Operator
            else {

                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                int result;

                if (tokens[i] == "+") {
                    result = a + b;
                }
                else if (tokens[i] == "-") {
                    result = a - b;
                }
                else if (tokens[i] == "*") {
                    result = a * b;
                }
                else {
                    result = a / b;
                }

                st.push(result);
            }
        }

        return st.top();
    }
};