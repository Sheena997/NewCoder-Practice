/*
���ӣ�https://www.nowcoder.com/questionTerminal/23a0c9e5b3eb4f37b9615766f0286e0c
��Դ��ţ����

[�����]˫ɫ��

�����к죬��������ɫ��ʯͷ������������Ҫ��������ʯͷ�һ����������Ҫ������������������  
1�� ��1��Ӧ�ð���1��ʯͷ����2��Ӧ�ð������飬�� i ����Ҫ���� i ��ʯͷ��  
2�� ͬһ���ʯͷӦ����ͬһ����ɫ������̣���  
3�� ���Ĳ��������ܶࡣ  ����������������������ǰ���£��ж����ֲ�ͬ�Ľ������ķ�����
    ����������һ����Ӧλ�õ�ʯͷ��ɫ��ͬ�����Ǿ���Ϊ��������������ͬ��ʯͷ���Բ����ꡣ

��������:
����������������������ֱ��ʾ�����ש�������a��b��0<=a,b<=2*10^5,a+b>=1����


�������:
����ͽ�����һ������������ʾ��ͬ�ķ�������1000000007ȡģ�Ľ����
ʾ��1
����
4 6
���
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