class Solution {
public:

    string expand(string s, int l, int r) {
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            l--;
            r++;
        }
        return s.substr(l + 1, r - l - 1);
    }

    string longestPalindrome(string s) {
        string ans = "";

        for (int i = 0; i < s.size(); i++) {

            // odd length
            string p1 = expand(s, i, i);

            // even length
            string p2 = expand(s, i, i + 1);

            if (p1.size() > ans.size()) ans = p1;
            if (p2.size() > ans.size()) ans = p2;
        }

        return ans;
    }
};