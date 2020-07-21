/*
链接：https://www.nowcoder.com/questionTerminal/325483e19dab4609baf00157e5ebeb6f
来源：牛客网

[编程题]数组操作
热度指数：12682时间限制：C/C++ 2秒，其他语言4秒空间限制：C/C++ 128M，其他语言256M
算法知识视频讲解
输入一个无序整数数组，调整数组中数字的顺序， 所有偶数位于数组的前半部分，使得所有奇数位于数组的后半部分。
要求时间复杂度为O(n)。

输入描述:
给定无序数组。
长度不超过1000000。


输出描述:
所有偶数位于数组的前半部分，所有奇数位于数组的后半部分。
如果有多个答案可以输出任意一个正确答案。
示例1
输入
2 4 5 7 8 1
输出
2 4 8 7 5 1

备注:
请自觉使用O(n)的算法。
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vc;
    int tmp = 0;
    while(cin >> tmp)
        vc.push_back(tmp);
    int begin = 0, end = vc.size() - 1;
    while(begin  < end)
    {
        while(begin < end && !(vc[begin] & 1))
            ++begin;
        while(begin < end && (vc[end] & 1))
            --end;
        auto Swap = [](int& a, int& b){
            int tmp = a;
            a = b;
            b = tmp;
        };
        Swap(vc[begin], vc[end]);
        ++begin;
        --end;
    }
    
    for(auto e : vc)
        cout << e << " ";
    cout << endl;
    
    return 0;
}