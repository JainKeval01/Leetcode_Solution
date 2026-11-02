class Solution {
public:
    void Islands(vector<vector<char>>& grid, int row, int col) {
        int m = grid.size();
        int n = grid[0].size();
        if(row<0||col<0||row>=m||col>=n||grid[row][col]=='0'){
            return;
        }
        grid[row][col]='0';
        Islands(grid,row + 1,col);
        Islands(grid,row - 1,col);
        Islands(grid,row,col+1);
        Islands(grid,row,col-1);

    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    count++;
                    Islands(grid, i, j);
                }
            }
        }
        return count;
    }
};