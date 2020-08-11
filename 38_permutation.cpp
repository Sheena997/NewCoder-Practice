/*
��ָ Offer 38. �ַ���������
����һ���ַ�������ӡ�����ַ������ַ����������С�

 

�����������˳�򷵻�����ַ������飬�����治�����ظ�Ԫ�ء�

 

ʾ��:

���룺s = "abc"
�����["abc","acb","bac","bca","cab","cba"]

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/zi-fu-chuan-de-pai-lie-lcof/
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