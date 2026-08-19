class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;

        for (int n : nums1) {
            for (int i = 0; i < nums2.size(); i++) {

                if (nums2[i] == n) {

                    int ans = -1;

                    for (int j = i + 1; j < nums2.size(); j++) {
                        if (nums2[j] > n) {
                            ans = nums2[j];
                            break;
                        }
                    }

                    v.push_back(ans);
                    break;
                }
            }
        }

        return v;
    }
};