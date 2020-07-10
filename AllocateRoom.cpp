/*
���ӣ�https://www.nowcoder.com/questionTerminal/a3e4762129bd4e30901586faffe92899?orderByHotValue=1&amp;mutiTagIds=595&amp;page=8&amp;onlyReference=false
��Դ��ţ����

[�����]�����2


��n�����䣬����i�ŷ����������Ҫ�����·��䣬����Ĺ����������ģ�����i�ŷ��������ȫ��������
���������� i+1, i+2, i+3, ... ��˳����������Щ�������һ���ˣ�n�ŷ���ĵ���һ��������1�ŷ��䣬
ֱ�����е��˶������·��䡣
���ڸ�����������ÿ������������Լ����һ���˱�����ķ����x������Ҫ�������ǰÿ�������������
���ݱ�֤һ���н⣬���ж���������һ���⡣

��������:
��һ����������n, x (2<=n<=10^5, 1<=x<=n)�������䷿�������Լ����һ���˱�����ķ���ţ�
�ڶ���n������ a_i(0<=a_i<=10^9) ������ÿ�����������������

�������:
���n������������ÿ���������ǰ��������
ʾ��1
����
3 1
6 5 1
���
4 4 4
*/
#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main()
{
    int n = 0, x = 0;
    while(cin >> n >> x)
    {
        vector<long> room(n, 0);
        long minNum = INT_MAX;
        for(int i = 0; i < n; ++i)
        {
            cin >> room[i];
            minNum = min(minNum, room[i]);
        }
        
        for(auto& e : room)
            e -= minNum;
        minNum *= n;
        while(1)
        {
            if(room[(x - 1 + n) % n] == 0)
            {
                room[(x - 1 + n) % n] = minNum;
                break;
            }
            else
            {
                --room[(x - 1 + n) % n];
                --x;
                ++minNum;
            }
        }
        for(auto e : room)
            cout << e << " ";
    }
    
    return 0;
}