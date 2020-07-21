/*
 * @lc app=leetcode.cn id=500 lang=cpp
 *
 * [500] 键盘行
 */

// @lc code=start
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> lines = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        vector<set<char>> sets;
        for (string s : lines) {
            set<char> st;
            for (char c : s) st.insert(c);
            sets.push_back(st);
        }
        for (int i = 0; i < words.size(); i++) {
            string word = words[i];
            int index = 0;
            while (index < 3 && sets[index].find(tolower(word[0])) == sets[index].end()) index++;
            for (int j = 1; j < word.length(); j++) {
                if (sets[index].find(tolower(word[j])) == sets[index].end()) {
                    words.erase(words.begin() + i--);
                    break;
                }
            }
        }
        return words;
    }
};
// @lc code=end

