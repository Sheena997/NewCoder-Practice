/*
���ӣ�https://www.nowcoder.com/questionTerminal/546b22232fd14997a10a8d2a7a158cbc
��Դ��ţ����

[�����]����������

С�׶���һ�����������������ģ����ҽ�����������2 \leq i \leq n2��i��n��
������\sum_{1 \leq j < i}{A_{j}} \leq A_{i}�� 1��j<i
��ÿ�����ֶ�Ҫ���ڵ���ǰ���������ֵĺ͡�
���ڸ�����������A_{i}��С������������ҳ����һ�����������У��������������ġ�

��������:
��һ����������\mathit TT������ÿ�����ݣ���һ��һ������\mathit nn��������һ��\mathit nn��������ʾ���С�

�������:
����ÿ�����ݣ�һ��һ�����ֱ�ʾ����������������еĳ��ȡ�
ʾ��1
����
2
5
1 3 9 2 6
5
4 2 9 16 7
���
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