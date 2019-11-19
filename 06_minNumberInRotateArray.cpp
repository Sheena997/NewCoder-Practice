/*
链接：https://www.nowcoder.com/practice/9f3231a991af4f55b95579b44b7a01ba?tpId=13&tqId=11159&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
题目描述
把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。
NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
*/
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        /*
        //方法一：
        if(rotateArray.empty())
            return 0;
        sort(rotateArray.begin(), rotateArray.end());
        return rotateArray[0];
        */
        //双指针法，使时间复杂度低
        int left = 0, right = rotateArray.size() - 1;
        while(left < right)
        {
            if(rotateArray[left] < rotateArray[right])
                return rotateArray[left];
            int mid = (right - left) / 2 + left;
            //如果左半段数组有序
            if(rotateArray[mid] > rotateArray[left])
                left = mid + 1;
            //如果右半段数组有序
            else if(rotateArray[mid] < rotateArray[right])
                right = mid;
            //否则rotateArray[mid] == rotateArray[right] == rotateArray[left]
            else
                ++left;
            
        }
        return rotateArray[left];
    }
};