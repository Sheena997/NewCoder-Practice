/*
剑指 Offer 48. 最长不含重复字符的子字符串
请从字符串中找出一个最长的不包含重复字符的子字符串，计算该最长子字符串的长度。

示例 1:
输入: "abcabcbb"
输出: 3 
解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
示例 2:
输入: "bbbbb"
输出: 1
解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
示例 3:
输入: "pwwkew"
输出: 3
解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
     请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。

提示：
s.length <= 40000

来源：LeetCode
链接：https://leetcode-cn.com/problems/zui-chang-bu-han-zhong-fu-zi-fu-de-zi-zi-fu-chuan-lcof/
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() < 2)
            return s.size();
        unordered_map<char, int> unmp;
        int res = 0, count = 0, left = 0, right = 0;
        while(right < s.size())
        {
            ++unmp[s[right]];
            ++count;
            while(unmp[s[right]] > 1)
            {
                --unmp[s[left]];
                ++left;
                --count;
            }
            res = max(res, count);
            ++right;
        }
        
        return res;
    }
};