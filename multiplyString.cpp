/*
链接：https://www.nowcoder.com/questionTerminal/6b668316f0ac4421ae86d7ead4301b42
来源：牛客网

[编程题]大数乘法
热度指数：2698时间限制：C/C++ 1秒，其他语言2秒空间限制：C/C++ 64M，其他语言128M
算法知识视频讲解
实现大数乘法，输入是两个字符串如
n1 = '340282366920938463463374607431768211456'
n2 = '340282366920938463463374607431768211456'
输出
'115792089237316195423570985008687907853269984665640564039457584007913129639936'
要求：不能使用对大数相乘有内建支持的语言；需要包含对输入字符串的合法性校验

输入描述:
一行，两个非负整数n1,n2，保证|n1|+|n2|<10000，其中|n|是n作为字符串的长度


输出描述:
输出n1*n2的结果
示例1
输入
340282366920938463463374607431768211456 340282366920938463463374607431768211456
输出
115792089237316195423570985008687907853269984665640564039457584007913129639936

备注:
给出的数据均是合法的，但仍建议您对输入的字符串进行合法性校验
*/
#include <iostream>
#include <string>

using namespace std;

string multiplyString(string str1, string str2)
{
    int len1 = str1.size(), len2 = str2.size();
    string res(len1 + len2, '0');
    
    for(int i = len2 - 1; i >= 0; --i)
    {
        for(int j = len1 - 1; j >= 0; --j)
        {
            int tmp = res[i + j + 1] - '0' + (str1[j] - '0') * (str2[i] - '0');
            res[i + j + 1] = tmp % 10 + '0';
            res[i + j] += tmp / 10;
        }
    }
    
    for(int i = 0; i < res.size(); ++i)
    {
        if(res[i] != '0')
            return res.substr(i);
    }
    
    return "0";
}
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    
    cout << multiplyString(str1, str2);
    
    return 0;
}