/*
��ָ Offer 05. �滻�ո�
��ʵ��һ�����������ַ��� s �е�ÿ���ո��滻��"%20"��

ʾ�� 1��

���룺s = "We are happy."
�����"We%20are%20happy."

���ƣ�

0 <= s �ĳ��� <= 10000

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/ti-huan-kong-ge-lcof/
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