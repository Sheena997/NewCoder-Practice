/*
链接：https://www.nowcoder.com/practice/8c82a5b80378478f9484d87d1c5f12a4?tpId=13&tqId=11161&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
题目描述
一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级
的台阶总共有多少种跳法（先后次序不同算不同的结果）。
*/
class Solution {
public:
    int jumpFloor(int number) {
        /*递归
        //斐波那契数列的变形，
        //对于n个台阶来说是n-1个台阶（最后一次一次跳一个）的跳法 
        // 和 n-2个台阶（最后一次一次跳两个）的跳法之和。
        if(number == 0 || number == 1 || number == 2)
            return number;
        
        return jumpFloor(number - 1) + jumpFloor(number - 2);
        */
        
        int f0 = 0, f1 = 1, f2 = 2;
        if(number == 0 || number == 1 || number == 2)
            return number;
        for(int i = 2; i < number; ++i)
        {
            f0 = f1;
            f1 = f2;
            f2 = f1 + f0;
        }
        return f2;
    }
};