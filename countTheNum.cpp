/*
���ӣ�https://www.nowcoder.com/questionTerminal/3e9d7d22b7dd4daab695b795d243315b
��Դ��ţ����

[�����]��С�ڱ���


����5��������, ���ǵ���С���ڱ�����ָ���ܹ�������������������������С��������
����5����ͬ��������, �����������ǵ���С�ڱ�����

��������:
�������һ��,һ���������������ͬ��������a, b, c, d, e(1 �� a, b, c, d, e �� 100), �Կո�ָ�


�������:
���һ������,��ʾ���ǵ���С�ڱ���
ʾ��1
����
1 2 3 4 5
���
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