/*
剑指 Offer 50. 第一个只出现一次的字符
在字符串 s 中找出第一个只出现一次的字符。如果没有，返回一个单空格。 s 只包含小写字母。

示例:

s = "abaccdeff"
返回 "b"

s = "" 
返回 " "

限制：
0 <= s 的长度 <= 50000

来源：LeetCode
链接：leetcode-cn.com/problems/di-yi-ge-zhi-chu-xian-yi-ci-de-zi-fu-lcof/
*/
class Solution {
public:
    char firstUniqChar(string s) {
        char res = ' ';
        if(s.empty())
            return res;
        unordered_map<char, int> unmp;
        for(auto& e : s)
            ++unmp[e];
        
        for(auto& e : s)
        {
            if(unmp[e] == 1)
            {
                res = e;
                break;
            }
        }
        
        return res;
    }
};