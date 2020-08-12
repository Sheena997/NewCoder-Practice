/*
剑指 Offer 05. 替换空格
请实现一个函数，把字符串 s 中的每个空格替换成"%20"。

示例 1：

输入：s = "We are happy."
输出："We%20are%20happy."

限制：

0 <= s 的长度 <= 10000

来源：LeetCode
链接：https://leetcode-cn.com/problems/ti-huan-kong-ge-lcof/
*/
class Solution {
public:
    string replaceSpace(string s) {
        int count = 0;
        for(auto& e : s)
            if(e == ' ')
                ++count;
        int i = s.size() - 1 + count * 2;
        int j = s.size() - 1;
        s += string(count*2, ' ');
        
        while(j >= 0)
        {
            if(s[j] != ' ')
            {
                s[i--] = s[j];
            }
            else if(s[j] == ' ')
            {
                s[i--] = '0';
                s[i--] = '2';
                s[i--] = '%';
            }
            --j;
        }
        
        return s;
    }
};