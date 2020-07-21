/*
 * @lc app=leetcode.cn id=207 lang=cpp
 *
 * [207] 课程表
 */

// @lc code=start
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> row = {};
        vector<vector<int>> corrs(numCourses, row);
        vector<int> indegrees(numCourses, 0);
        for (vector<int> v : prerequisites) {
            corrs[v[1]].push_back(v[0]);
            indegrees[v[0]]++;
        }
        // BFS
        queue<int> q;
        for (int i = 0; i < numCourses; i++) if (!indegrees[i]) q.push(i);
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            numCourses--;
            /** 
             * Subtract 1 from all neighbor vertices' indegrees.
             * Make them new starting vertices if their indegrees == 0.
             */
            for (int i : corrs[curr]) if (!(--indegrees[i])) q.push(i);
        }
        return !numCourses;
    }
};
// @lc code=end

