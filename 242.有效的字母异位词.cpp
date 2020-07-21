/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> s_map, t_map;
        for (int i = 0; i < s.length(); i++) {
            if (s_map.find(s[i]) == s_map.end()) s_map.insert({s[i], 0});
            s_map[s[i]]++;
            if (t_map.find(t[i]) == t_map.end()) t_map.insert({t[i], 0});
            t_map[t[i]]++;
        }
        return s_map == t_map;
    }
};
// @lc code=end

