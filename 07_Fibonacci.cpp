/*
链接：https://www.nowcoder.com/practice/c6c7742f5ba7442aada113136ddea0c3?tpId=13&tqId=11160&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
题目描述
大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项（从0开始，第0项为0）。
n<=39
*/
class Solution {
public:
    int Fibonacci(int n) {
        /*
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        if(n == 2)
            return 1;
        return Fibonacci(n - 1) + Fibonacci(n - 2);
        **/
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        if(n == 2)
            return 1;
        int f0 = 0;
        int f1 = 1;
        int f2 = 1;
        for(int i = 2; i < n; ++i)
        {
            f0 = f1;
            f1 = f2;
            f2 = f1 + f0;
        }
        return f2;
    }
};