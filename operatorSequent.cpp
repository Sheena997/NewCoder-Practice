/*
���ӣ�https://www.nowcoder.com/questionTerminal/913eb9e380274e3c9ba7676d0010cc7b
��Դ��ţ����

[�����]��������


С����һ������Ϊn����������,a_1,...,a_n��Ȼ������һ��������b�Ͻ���n�����²���:
1����a_i����b���е�ĩβ
2������b����
С����Ҫ������������n��֮���b���С�

��������:
�����������,��һ�а���һ������n(2 �� n �� 2*10^5),�����еĳ��ȡ�
�ڶ��а���n������a_i(1 �� a_i �� 10^9),������a�е�ÿ������,�Կո�ָ


�������:
��һ�����������n��֮���b����,�Կո�ָ�,��ĩ�޿ո�
ʾ��1
����
4
1 2 3 4
���
4 2 1 3
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
        vector<long> vc(n, 0);
        for(auto& e : vc)
            cin >> e;
        
        if(n & 1)
        {
            for(int i = vc.size() - 1; i >= 0; i -= 2)
                cout << vc[i] << " ";
            for(int i = 1; i < vc.size(); i += 2)
                (i == n - 1) ? cout << vc[i] <<endl : cout << vc[i] << " "; 
        }
        else
        {
            for(int i = vc.size() - 1; i >= 0; i -= 2)
                cout << vc[i] << " ";
            for(int i = 0; i < vc.size(); i += 2)
                (i == n - 1) ? cout << vc[i] << endl : cout << vc[i] << " ";
        }
    }
    
    return 0;
}