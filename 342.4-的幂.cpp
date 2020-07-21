/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int num) {
        /** 
         * Explanation:
         * 1. num > 0: make sure num is a positive number
         * 2. !(num & (num - 1)): make sure num has no zeros after the leading 1
         *    e.g. 100, 10000 <OK>; 10100 <NOT OK>
         * 3. !(num & 0xaaaaaaaa): make sure the leading 1 is in even position
         *    e.g. 1 <pos 0, OK>, 100 <pos 2, OK>; 10 <pos 1, NOT OK>
         */
        return num > 0 && !(num & (num - 1)) && !(num & 0xaaaaaaaa);
    }
};
// @lc code=end

