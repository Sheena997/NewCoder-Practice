/*
��ָ Offer 57 - II. ��Ϊs��������������
����һ�������� target ��������к�Ϊ target ���������������У����ٺ�������������

�����ڵ�������С�������У���ͬ���а����׸����ִ�С�������С�

 

ʾ�� 1��

���룺target = 9
�����[[2,3,4],[4,5]]
ʾ�� 2��

���룺target = 15
�����[[1,2,3,4,5],[4,5,6],[7,8]]

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/he-wei-sde-lian-xu-zheng-shu-xu-lie-lcof/
*/
class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        int i = 1, j = 1;
        int sum = 0;
        vector<vector<int>> res;
        
        while(i <= target / 2)
        {
            if(sum < target)
            {
                sum += j;
                ++j;
            }
            else if(sum > target)
            {
                sum -= i;
                ++i;
            }
            else
            {
                vector<int> ret;
                for(int k = i; k < j; ++k)
                    ret.push_back(k);
                res.push_back(ret);
                sum -= i;
                ++i;
            }
        }
        
        return res;
    }
};