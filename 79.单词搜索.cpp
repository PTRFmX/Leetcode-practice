/*
 * @lc app=leetcode.cn id=79 lang=cpp
 *
 * [79] 单词搜索
 */

// @lc code=start
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if (!word.length()) return false;
        // Determine starting point
        vector<pair<int, int>> coor;
        int m = board.size(), n = board[0].size();
        if (word.length() > m * n) return false;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == word[0]) coor.push_back(make_pair(i, j));
            }
        }
        if (word.length() == 1) return coor.size() != 0;
        // Start dfs
        for (pair<int, int> curr_coor : coor) {
            vector<bool> v_row(n, false);
            vector<vector<bool>> visited(m, v_row);
            visited[curr_coor.first][curr_coor.second] = true;
            if (dfs(board, word, 0, curr_coor.first, curr_coor.second, visited)) return true; 
        }
        return false;
    }

    bool dfs(vector<vector<char>>& board, string word, int idx, int i, int j, vector<vector<bool>> visited) {
        if (idx == word.length() - 1) return true;
        int m = board.size(), n = board[0].size();
        bool res = false;
        if (i > 0 && !visited[i - 1][j] && board[i - 1][j] == word[idx + 1]) {
            visited[i - 1][j] = true;
            res = res || dfs(board, word, idx + 1, i - 1, j, visited);
            visited[i - 1][j] = false;
        }
        if (i < m - 1 && !visited[i + 1][j] && board[i + 1][j] == word[idx + 1]) {
            visited[i + 1][j] = true;
            res = res || dfs(board, word, idx + 1, i + 1, j, visited);
            visited[i + 1][j] = false;
        }
        if (j > 0 && !visited[i][j - 1] && board[i][j - 1] == word[idx + 1]) {
            visited[i][j - 1] = true;
            res = res || dfs(board, word, idx + 1, i, j - 1, visited);
            visited[i][j - 1] = false;
        }
        if (j < n - 1 && !visited[i][j + 1] && board[i][j + 1] == word[idx + 1]) {
            visited[i][j + 1] = true;
            res = res || dfs(board, word, idx + 1, i, j + 1, visited);
            visited[i][j + 1] = false;
        }
        return res;
    }
};
// @lc code=end

