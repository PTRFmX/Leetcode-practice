/*
 * @lc app=leetcode.cn id=374 lang=cpp
 *
 * [374] 猜数字大小
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long left = 1, right = n + left, mid = right / 2, res;
        while (left < right && (res = guess(mid))) {
            if (res == 1) left = mid;
            else right = mid;
            mid = (left + right) / 2;
        }
        return mid;
    }
};
// @lc code=end

