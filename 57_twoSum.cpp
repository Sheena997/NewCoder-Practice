/*
��ָ Offer 57. ��Ϊs����������
����һ����������������һ������s���������в�����������
ʹ�����ǵĺ�������s������ж�����ֵĺ͵���s�����������һ�Լ��ɡ� 

ʾ�� 1��
���룺nums = [2,7,11,15], target = 9
�����[2,7] ���� [7,2]
ʾ�� 2��
���룺nums = [10,26,30,31,47,60], target = 40
�����[10,30] ���� [30,10]
 
���ƣ�
1 <= nums.length <= 10^5
1 <= nums[i] <= 10^6

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/he-wei-sde-liang-ge-shu-zi-lcof/
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        if(nums.size() < 2)
            return res;
        int l = 0, r = nums.size() - 1;
        while(l < nums.size() - 1 && r >= 0 && l < r)
        {
            if(nums[l] + nums[r] < target)
            {
                ++l;
            }
            else if(nums[l] + nums[r] > target)
            {
                --r;
            }
            else
            {
                res.push_back(nums[l]);
                res.push_back(nums[r]);
                return res;
            }
        }
        
        return res;
    }
};