/*
链接：https://www.nowcoder.com/questionTerminal/3e9d7d22b7dd4daab695b795d243315b
来源：牛客网

[编程题]最小众倍数


给定5个正整数, 它们的最小的众倍数是指的能够被其中至少三个数整除的最小正整数。
给定5个不同的正整数, 请计算输出它们的最小众倍数。

输入描述:
输入包括一行,一行中有五个各不相同的正整数a, b, c, d, e(1 ≤ a, b, c, d, e ≤ 100), 以空格分割


输出描述:
输出一个整数,表示它们的最小众倍数
示例1
输入
1 2 3 4 5
输出
4
*/
#include <iostream>
#include <vector>

using namespace std;

long countTheNum(vector<int> vc, long sum)
{
    int i = 1;
    for(i = 1; i <= sum; ++i)
    {
        int count = 0;
        for(auto e : vc)
        {
            if(i % e == 0)
                ++count;
        }
        if(count >= 3)
            break;
    }
    
    return i;
}
int main()
{
    vector<int> vc(5, 0);
    long sum = 1;
    for(auto& e : vc)
    {
        cin >> e;
        sum *= e;
    }
    
    long res = countTheNum(vc, sum);
    
    cout << res << endl;
    
    return 0;
}