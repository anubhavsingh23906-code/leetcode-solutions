class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> distinct;

        for (int num : nums) {
            if (distinct.empty() || distinct.back() != num) {
                distinct.push_back(num);
            }
        }

        int n = distinct.size();

        if (n < 3)
            return distinct[n - 1];

        return distinct[n - 3];
    }
};