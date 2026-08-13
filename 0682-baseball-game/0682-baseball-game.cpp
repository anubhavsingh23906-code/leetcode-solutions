class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v;

        for(int i = 0; i < operations.size(); i++) {

            if(operations[i] == "+") {
                int sum = v[v.size() - 1] + v[v.size() - 2];
                v.push_back(sum);
            }

            else if(operations[i] == "C") {
                v.pop_back();
            }

            else if(operations[i] == "D") {
                v.push_back(2 * v[v.size() - 1]);
            }

            else {
                v.push_back(stoi(operations[i]));
            }
        }

        int sum = 0;
        for(int x : v) {
            sum += x;
        }

        return sum;
    }
};