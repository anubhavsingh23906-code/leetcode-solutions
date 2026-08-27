class Solution {
public:
    string decodeString(string s) {

        stack<int> nums;
        stack<string> strs;

        int num = 0;
        string current = "";

        for (char c : s) {

            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }

            else if (c == '[') {
                nums.push(num);
                strs.push(current);

                num = 0;
                current = "";
            }

            else if (c == ']') {
                int k = nums.top();
                nums.pop();

                string previous = strs.top();
                strs.pop();

                string temp = "";

                for (int i = 0; i < k; i++) {
                    temp += current;
                }

                current = previous + temp;
            }

            else {
                current += c;
            }
        }

        return current;
    }
};