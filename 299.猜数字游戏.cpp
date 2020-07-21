/*
 * @lc app=leetcode.cn id=299 lang=cpp
 *
 * [299] 猜数字游戏
 */

// @lc code=start
class Solution {
public:
    string getHint(string secret, string guess) {
        int len = secret.length(), bulls = 0, cows = 0;
        unordered_map<char, int> s, g;
        for (int i = 0; i < len; i++) {
            if (secret[i] == guess[i]) {
                bulls++;
                continue;
            }
            if (s.find(secret[i]) == s.end()) s.insert({secret[i], 1});
            else s[secret[i]]++;
            if (g.find(guess[i]) == g.end()) g.insert({guess[i], 1});
            else g[guess[i]]++;
        }
        for (auto it = s.begin(); it != s.end(); it++) {
            auto gt = g.find(it->first);
            if (gt != g.end()) cows += min(it->second, gt->second);
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};
// @lc code=end

