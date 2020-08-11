/*
剑指 Offer 53 - I. 在排序数组中查找数字 I
统计一个数字在排序数组中出现的次数。

 

示例 1:

输入: nums = [5,7,7,8,8,10], target = 8
输出: 2
示例 2:

输入: nums = [5,7,7,8,8,10], target = 6
输出: 0

来源：LeetCode
链接：https://leetcode-cn.com/problems/zai-pai-xu-shu-zu-zhong-cha-zhao-shu-zi-lcof/
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int count = 0, left = 0, right = nums.size() - 1;
        
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(nums[mid] > target)
            {
                right = mid - 1;
            }
            else if(nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                ++count;
                left = mid - 1;
                right = mid + 1;
                while(left >= 0 && nums[left--] == target)
                    ++count;
                while(right <= nums.size() - 1 && nums[right++] == target)
                    ++count;
                
                break;
            }
        }
        
        return count;
    }
};