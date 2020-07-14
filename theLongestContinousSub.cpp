/*
链接：https://www.nowcoder.com/questionTerminal/546b22232fd14997a10a8d2a7a158cbc
来源：牛客网

[编程题]完美的序列

小易定义一个数字序列是完美的，当且仅当对于任意2 \leq i \leq n2≤i≤n，
都满足\sum_{1 \leq j < i}{A_{j}} \leq A_{i}∑ 1≤j<i
即每个数字都要大于等于前面所有数字的和。
现在给定数字序列A_{i}，小易想请你从中找出最长的一段连续子序列，满足它是完美的。

输入描述:
第一行数据组数\mathit TT。对于每组数据，第一行一个整数\mathit nn，接下来一行\mathit nn个整数表示序列。

输出描述:
对于每组数据，一行一个数字表示最长完美的连续子序列的长度。
示例1
输入
2
5
1 3 9 2 6
5
4 2 9 16 7
输出
3
3
*/
#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int theLongestContinousSub(vector<long> vc)
{
    int res = INT_MIN;
    int start = 1, sum = vc[0];
    for(int i = 1; i < vc.size(); ++i)
    {
        if(vc[i] >= sum)
        {
            sum += vc[i];
            res = max(res, i - start + 1);
        }
        else
        {
            start = i;
            sum = vc[i];
        }
    }
    
    return res;
}
int main()
{
    int m = 0;
    cin >> m;
    while(m--)
    {
        int n = 0;
        cin >> n;
        vector<long> vc(n, 0);
        for(auto& e : vc)
            cin >> e;
        
        int res = theLongestContinousSub(vc);
        
        cout << res << endl;
    }
    
    return 0;
}