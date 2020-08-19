/*
剑指 Offer 43. 1～n整数中1出现的次数
输入一个整数 n ，求1～n这n个整数的十进制表示中1出现的次数。
例如，输入12，1～12这些整数中包含1 的数字有1、10、11和12，1一共出现了5次
示例 1：
输入：n = 12
输出：5
示例 2：
输入：n = 13
输出：6

来源：LeetCode
链接：https://leetcode-cn.com/problems/1nzheng-shu-zhong-1chu-xian-de-ci-shu-lcof/
*/
class Solution {
public:
    int countDigitOne(int n) {
        int res = 0;
        long i = 1;
        //1231
        while(n / i != 0)
        {
            long high = n / (10 * i); //高位//123//12//1//0
            long cur = (n / i) % 10; //当前位//1//3//2//1
            long low = n - (n / i) * i; //低位//0//1//31//231
            
            if(cur < 1)
                res += high * i;
            else if(cur == 1)
                res += high * i + (low + 1);//0-123:124//0-231: 232
            else
                res += (high + 1) * i;//0-12:13  0-9:10  13 * 10 = 130//0-1:2    0-99:100    2*100=200
            i *= 10;
        }
        
        return res;
    }
};