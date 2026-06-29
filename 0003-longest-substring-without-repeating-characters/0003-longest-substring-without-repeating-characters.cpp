class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> dt;
        int left = 0, ans = 0;

        for (int right = 0; right < s.size(); right++) {
            while (dt.count(s[right])) {
                dt.erase(s[left]);
                left++;
            }

            dt.insert(s[right]);
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};