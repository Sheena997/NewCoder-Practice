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
 
/*
��������
dp[level & 1][j] ��ʾǰlevel���j��ʯͷ
�����Ƚ��ٵ��Ǹ���ɫ��ʯͷ���ٶ�Ϊ��ɫ
������������ɫ������ʱ�������Ż����Ӷ�
*/ 
int theDoubleColorTower(int a, int b)
{
    if(a == 0 && b == 0)
        return 0;
    if(a == 0 || b == 0)
        return 1;
    if(a > b)
        swap(a, b);
     
    vector<vector<int>> dp(2, vector<int>(300001, 0));
    int sum = 1, l = 0, r = 0, s = 0;
    dp[1][0] = dp[1][1] = 1;
	int cur = 0, last = 0;
    for(int i = 2; i <= sqrt(2 * (a + b)); ++i)
    {
        sum += i;
        int q = min(sum, a);//ǰi�����Ҫ�ŵ���ʯ���������ǲ��ܳ�����ʯ������a
		//������ǰi�㽫b����ʯ���꣨sum - b > 0������ôǰi�����ٷ�sum-b����ʯ
		//��sum - b < 0, ˵��ǰi�����ٿ��Բ��ź�ʯ����dp[i][j]��j��0��ʼ����
		//���ϣ�j�ĸ��·�Χ�½�Ϊmax(sum - b, 0)
		int p = max(sum - b, 0);
        //�½�����Ͻ磬˵����ʯ���꣬��ʯ����Ҳ��������һ���ˣ���ô������߲��ˣ����ٸ���
        if(p > q)
            break;
        r = q;
        l = p;
		cur = i & 1;
		last = !cur;
		//dp[j]��ʾ��i��ź�ʯ��
		//dp[j - i]��ʾ��i�����ʯ����ôǰi��������i����ʯ���� j >= i����
		//ת�Ʒ��̣�dp[j] = dp[j] + dp[j - i]
		//ǰi�����ʯ����j��˵����i��ֻ���ܷ��˺�ʯ��dp[j] = dp[j];
        for(int j = l; j < i; ++j)
			dp[cur][j] = dp[last][j];
        for(int j = i; j <= q; ++j)
			dp[cur][j] = (dp[last][j] + dp[last][j - i]) % MOD;
    }
     
    for(int i = l; i <= r; ++i)
        s = (s + dp[cur][i]) % MOD;
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