/*
���ӣ�https://www.nowcoder.com/questionTerminal/adc291e7e79f452c8b59243a5ce68d3a
��Դ��ţ����

[�����]��Ȥ������
�ȶ�ָ����7177ʱ�����ƣ�C/C++ 1�룬��������2��ռ����ƣ�C/C++ 32M����������64M
�㷨֪ʶ��Ƶ����
�ȶ�����һ��N���������飬���뽫�����С���� �ź��򣬵������ȵĶȶ���ֻ���������������
��ȡ�����е�һ����Ȼ������������������һ��λ�á�
�����ٲ������ٴο���ʹ�������С��������

��������:
��������һ��������N����������һ������N��������(N <= 50, ÿ�����ľ���ֵС�ڵ���1000)


�������:
���һ��������ʾ���ٵĲ���������
ʾ��1
����
4
19 7 8 25
���
2
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    while(cin >> n)
    {
        vector<int> vc(n, 0);
        for(auto& e : vc)
            cin >> e;
        
        vector<int> ret(vc);
        sort(ret.begin(), ret.end());
        
        int res = 0, j = 0;
        for(int i = 0; i < n; ++i)
        {
            if(ret[j] == vc[i])
            {
                ++res;
                ++j;
            }
        }
        
        cout << n - res << endl;
    }
    
    return 0;
}