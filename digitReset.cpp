/*
���ӣ�https://www.nowcoder.com/questionTerminal/f970201e9f7e4040ab25a40918e27d15
��Դ��ţ����

[�����]��λ����


ţţ��һ��������x,ţţ��Ҫ������x�е���λ�������ŵõ�һ������(��ͬ��x����),ţţ��֪
����������Ƿ������ԭx�ı������������������������⡣

��������:
�������t+1��,��һ�а���һ������t(1 �� t �� 10),
������t��,ÿ��һ������x(1 �� x �� 10^6)


�������:
����ÿ��x,�����������֮���Ϊ�Լ��ı������"Possible", �������"Impossible".
ʾ��1
����
2
14
1035
���
Impossible
Possible
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    while(n--)
    {
        int a = 0;
        cin >> a;
        string str1 = to_string(a);
        sort(str1.begin(), str1.end());
        for(int i = 2; i <= 10; ++i)
        {
            int ret = a * i;
            string str2 = to_string(ret);
            if(str1.size() > str2.size())
            {
                cout << "Impossible" << endl;
                break;
            }
            else
            {
                sort(str2.begin(), str2.end());
                if(str1 == str2)
                {
                    cout << "Possible" << endl;
                    break;
                }
            }
            if(i == 10)
                cout << "Impossible" << endl;
        }
    }
    
    return 0;
}