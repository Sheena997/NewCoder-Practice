/*
���ӣ�https://www.nowcoder.com/questionTerminal/84bab071c3df451f902047a217c5614d
��Դ��ţ����

[�����]ţţ������


ţţ����˯��ͷ�����������˺ܶ����ӣ�ֻ�����������ʱ�����Ż��ѹ������Ҿ������𴲡�
��������������ҪX���ӵ�����ң��Ͽ�ʱ��Ϊ�����AʱB�֣��������������ʲôʱ����

��������:
ÿ���������һ������������
ÿ�����������ĵ�һ�а���һ������������ʾ���ӵ�����N(N<=100)��
��������N��ÿ�а���������������ʾ������������ʱ��ΪHi(0<=A<24)ʱMi(0<=B<60)�֡�
��������һ�а���һ����������ʾ������������ҪX(0<=X<=100)���ӵ�����ҡ�
��������һ�а���������������ʾ�Ͽ�ʱ��ΪA(0<=A<24)ʱB(0<=B<60)�֡�
���ݱ�֤������һ�����ӿ�����ţţ��ʱ������ҡ�


�������:
�������������ʾţţ������ʱ�䡣
ʾ��1
����
3 
5 0 
6 0 
7 0 
59 
6 59
���
6 0
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector<int> vc;
    while(n--)
    {
        int h = 0, m = 0;
        cin >> h >> m;
        int sum = h * 60 + m;
        vc.push_back(sum);
    }
    
    int minute = 0;
    cin >> minute;
    int class_hour = 0, class_minute = 0;
    cin >> class_hour >> class_minute;
    int class_sum = class_hour * 60 + class_minute;
    int res = vc[0];
    for(int i = 0; i < vc.size(); ++i)
    {
        if(vc[i] + minute <= class_sum && res < vc[i])
            res = vc[i];
    }
    
    cout << res / 60 << " " << res % 60 << endl;
    
    return 0;
}