/*
���ӣ�https://www.nowcoder.com/questionTerminal/325483e19dab4609baf00157e5ebeb6f
��Դ��ţ����

[�����]�������
�ȶ�ָ����12682ʱ�����ƣ�C/C++ 2�룬��������4��ռ����ƣ�C/C++ 128M����������256M
�㷨֪ʶ��Ƶ����
����һ�������������飬�������������ֵ�˳�� ����ż��λ�������ǰ�벿�֣�ʹ����������λ������ĺ�벿�֡�
Ҫ��ʱ�临�Ӷ�ΪO(n)��

��������:
�����������顣
���Ȳ�����1000000��


�������:
����ż��λ�������ǰ�벿�֣���������λ������ĺ�벿�֡�
����ж���𰸿����������һ����ȷ�𰸡�
ʾ��1
����
2 4 5 7 8 1
���
2 4 8 7 5 1

��ע:
���Ծ�ʹ��O(n)���㷨��
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vc;
    int tmp = 0;
    while(cin >> tmp)
        vc.push_back(tmp);
    int begin = 0, end = vc.size() - 1;
    while(begin  < end)
    {
        while(begin < end && !(vc[begin] & 1))
            ++begin;
        while(begin < end && (vc[end] & 1))
            --end;
        auto Swap = [](int& a, int& b){
            int tmp = a;
            a = b;
            b = tmp;
        };
        Swap(vc[begin], vc[end]);
        ++begin;
        --end;
    }
    
    for(auto e : vc)
        cout << e << " ";
    cout << endl;
    
    return 0;
}