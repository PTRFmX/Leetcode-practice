/*
 * @lc app=leetcode.cn id=71 lang=cpp
 *
 * [71] 简化路径
 */

// @lc code=start
class Solution {
public:
    string simplifyPath(string path) {
        stack<string> paths;
        unsigned int len = path.length();
        string::size_type pos1, pos2;
        pos2 = path.find('/');
        pos1 = 0;
        while (string::npos != pos2) {
            string curr_path = path.substr(pos1, pos2 - pos1);
            addPath(paths, curr_path);
            pos1 = pos2 + 1;
            pos2 = path.find('/', pos1);
        }
        if (pos1 != path.length()) addPath(paths, path.substr(pos1));
        return composePath(paths);
    }

    void addPath(stack<string>& s, string str) {
        if (!str.length() || str == ".") return;
        if (str == ".." && !s.empty()) s.pop();
        else if (str != "..") s.push(str);
    }

    string composePath(stack<string>& s) {
        if (s.size() == 0) return "/";
        if (s.size() == 1) return '/' + s.top();
        string curr = s.top();
        s.pop();
        return composePath(s) + '/' + curr;
    }
};
// @lc code=end

