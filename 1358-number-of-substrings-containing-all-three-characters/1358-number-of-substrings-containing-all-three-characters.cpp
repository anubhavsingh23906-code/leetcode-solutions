class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> freq(3, 0);
        int l = 0, ans = 0;

        for (int r = 0; r < s.size(); r++) {
            freq[s[r] - 'a']++;

            while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0) {
                ans += (s.size() - r);
                freq[s[l] - 'a']--;
                l++;
            }
        }

        return ans;
    }
};