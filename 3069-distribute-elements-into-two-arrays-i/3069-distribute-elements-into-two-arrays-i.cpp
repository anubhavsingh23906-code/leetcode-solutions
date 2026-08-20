class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> v;
        vector<int> u;

        v.push_back(nums[0]);
        u.push_back(nums[1]);

        for(int i = 2; i < nums.size(); i++) {
            
            if(v.back() > u.back()) {
                v.push_back(nums[i]);
            }
            else {
                u.push_back(nums[i]);
            }
        }

        for(int x : u) {
            v.push_back(x);
        }

        return v;
    }
};