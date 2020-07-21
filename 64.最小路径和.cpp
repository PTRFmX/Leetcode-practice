/*
 * @lc app=leetcode.cn id=64 lang=cpp
 *
 * [64] 最小路径和
 */

// @lc code=start
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        if (m == 0) return 0;
        int n = grid[0].size();
        int dis[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                dis[i][j] = __INT_MAX__;
            }
        }
        dis[0][0] = grid[0][0];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0) {
                    if (j == 0) continue;
                    dis[i][j] = min(grid[i][j] + dis[i][j - 1], dis[i][j]);
                }
                else if (j == 0) {
                    dis[i][j] = min(grid[i][j] + dis[i - 1][j], dis[i][j]);
                }
                else dis[i][j] = min(min(grid[i][j] + dis[i - 1][j], grid[i][j] + dis[i][j - 1]), dis[i][j]);
            }
        }
        return dis[m - 1][n - 1];
    }

    // Standard BFS + Dijkstra
    int tleSol(vector<vector<int>>& grid) {
        int m = grid.size();
        if (!m) return 0;
        int n = grid[0].size();
        int dis[m][n];
        bool visited[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                dis[i][j] = __INT_MAX__;
                visited[i][j] = false;
            }
        }
        queue<pair<int, int>> q;
        int row = 0, col = 0;
        dis[0][0] = grid[0][0];
        q.push(make_pair(row, col));
        while(!q.empty()) {
            pair<int, int> coor = q.front();
            row = coor.first;
            col = coor.second;
            int curr = dis[row][col];
            q.pop();
            visited[row][col] = true;
            if (row < m - 1 && !visited[row + 1][col]) {
                q.push(make_pair(row + 1, col));
                dis[row + 1][col] = min(dis[row + 1][col], grid[row + 1][col] + curr);
            }
            if (col < n - 1 && !visited[row][col + 1]) {
                q.push(make_pair(row, col + 1));
                dis[row][col + 1] = min(dis[row][col + 1], grid[row][col + 1] + curr);
            }
        }
        return dis[m - 1][n - 1];
    }
};
// @lc code=end

