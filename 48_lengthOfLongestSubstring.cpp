/*
��ָ Offer 48. ������ظ��ַ������ַ���
����ַ������ҳ�һ����Ĳ������ظ��ַ������ַ��������������ַ����ĳ��ȡ�

ʾ�� 1:
����: "abcabcbb"
���: 3 
����: ��Ϊ���ظ��ַ�����Ӵ��� "abc"�������䳤��Ϊ 3��
ʾ�� 2:
����: "bbbbb"
���: 1
����: ��Ϊ���ظ��ַ�����Ӵ��� "b"�������䳤��Ϊ 1��
ʾ�� 3:
����: "pwwkew"
���: 3
����: ��Ϊ���ظ��ַ�����Ӵ��� "wke"�������䳤��Ϊ 3��
     ��ע�⣬��Ĵ𰸱����� �Ӵ� �ĳ��ȣ�"pwke" ��һ�������У������Ӵ���

��ʾ��
s.length <= 40000

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/zui-chang-bu-han-zhong-fu-zi-fu-de-zi-zi-fu-chuan-lcof/
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