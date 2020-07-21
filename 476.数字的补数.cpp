/*
 * @lc app=leetcode.cn id=476 lang=cpp
 *
 * [476] 数字的补数
 */

// @lc code=start
class Solution {
public:
    int findComplement(int num) {
        int n = 0, l = getNum(num);
        for (int i = 0; i < l; i++) {
            int curr_bit = (num >> i) & 1;
            if (!curr_bit) n = n | (1 << i);
        }
        return n;
    }

    int getNum(int a) {
        int num = 1;
        while (pow(2, num) < a) num++;
        return num;
    }
};
// @lc code=end

