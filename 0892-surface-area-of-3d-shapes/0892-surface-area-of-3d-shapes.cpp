class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int area = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                int h = grid[i][j];

                if (h == 0)
                    continue;

                area += 2;

              
                area += 4 * h;

                if (j + 1 < n) {
                    area -= 2 * min(h, grid[i][j + 1]);
                }

                
                if (i + 1 < n) {
                    area -= 2 * min(h, grid[i + 1][j]);
                }
            }
        }

        return area;
    }
};