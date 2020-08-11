/*
剑指 Offer 38. 字符串的排列
输入一个字符串，打印出该字符串中字符的所有排列。

 

你可以以任意顺序返回这个字符串数组，但里面不能有重复元素。

 

示例:

输入：s = "abc"
输出：["abc","acb","bac","bca","cab","cba"]

来源：LeetCode
链接：https://leetcode-cn.com/problems/zi-fu-chuan-de-pai-lie-lcof/
*/
class Solution {
public:
    void dfs(string s, set<string>& res, string& ret, string& visited, int index)
    {
        if(index == s.size())
        {
            res.insert(ret);
            return;
        }
        
        for(int i = 0; i < s.size(); ++i)
        {
            if(visited[i] == '0')
            {
                visited[i] = '1';
                ret.push_back(s[i]);
                dfs(s, res, ret, visited, index + 1);
                ret.pop_back();
                visited[i] = '0';
            }
        }
    }
    vector<string> permutation(string s) {
        vector<string> res;
        string ret;
        string visited(s.size(), '0');
        set<string> st;
        
        dfs(s, st, ret, visited, 0);
        
        auto p = st.begin();
        while(p != st.end())
        {
            res.push_back(*p);
            ++p;
        }
        
        return res;
    }
};