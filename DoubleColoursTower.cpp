/*
链接：https://www.nowcoder.com/questionTerminal/23a0c9e5b3eb4f37b9615766f0286e0c
来源：牛客网

[编程题]双色塔

现在有红，绿两种颜色的石头，现在我们需要用这两种石头搭建一个塔，塔需要满足如下三个条件：  
1． 第1层应该包含1块石头，第2层应该包含两块，第 i 层需要包含 i 块石头。  
2． 同一层的石头应该是同一个颜色（红或绿）。  
3． 塔的层数尽可能多。  问在满足上面三个条件的前提下，有多少种不同的建造塔的方案，
    当塔中任意一个对应位置的石头颜色不同，我们就认为这两个方案不相同。石头可以不用完。

输入描述:
输入仅包含两个正整数，分别表示红和绿砖块的数量a，b（0<=a,b<=2*10^5,a+b>=1）。


输出描述:
输出和仅包含一个正整数，表示不同的方案数对1000000007取模的结果。
示例1
输入
4 6
输出
2
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
 
using namespace std;
 
const int MOD = 1000000007;
 
int theDoubleColorTower(int a, int b)
{
    if(a == 0 && b == 0)
        return 0;
    if(a == 0 || b == 0)
        return 1;
    if(a > b)
        swap(a, b);
     
    vector<int> dp(300001, 0);
    int t = 1, l = 0, r = 0, s = 0;
    dp[0] = dp[1] = 1;
    for(int i = 2; i <= sqrt(2 * (a + b)); ++i)
    {
        t += i;
        int q = min(t, a), p = max(t - b, 0);
        if(p > q)
            break;
        r = q;
        l = p;
        for(int j = r; j >= i + 1; --j)
            dp[j] = (dp[j] + dp[j - i]) % MOD;
        ++dp[i];
    }
     
    for(int i = l; i <= r; ++i)
        s = (s + dp[i]) % MOD;
    return s;
}
int main()
{
    int a = 0, b = 0;
    while(cin >> a >> b)
    {
        cout << theDoubleColorTower(a, b);
    }
     
    return 0;
}