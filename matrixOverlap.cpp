/*
���ӣ�https://www.nowcoder.com/questionTerminal/d17cf8815a0745f5bbe856eee123cd24
��Դ��ţ����



ƽ������n������, ��i�����ε����½�����Ϊ(x1[i], y1[i]), ���Ͻ�����Ϊ(x2[i], y2[i])��

����������߶�������й�����������Ϊ�������໥�ص���(�����Ǳ߽�ͽ���)��

��������ƽ�����ص������������ĵط�,�ж��ٸ������໥�ص���


��������:
����������С�
��һ�а���һ������n(2 <= n <= 50), ��ʾ���εĸ�����
�ڶ��а���n������x1[i](-10^9 <= x1[i] <= 10^9),��ʾ���½ǵĺ����ꡣ
�����а���n������y1[i](-10^9 <= y1[i] <= 10^9),��ʾ���½ǵ������ꡣ
�����а���n������x2[i](-10^9 <= x2[i] <= 10^9),��ʾ���Ͻǵĺ����ꡣ
�����а���n������y2[i](-10^9 <= y2[i] <= 10^9),��ʾ���Ͻǵ������ꡣ


�������:
���һ��������, ��ʾ���ĵط��ж��ٸ������໥�ص�,������ζ��������ص�,���1��
ʾ��1
����
2
0 90
0 90
100 200
100 200
���
2
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector<int> x1(n, 0);
    vector<int> y1(n, 0);
    vector<int> x2(n, 0);
    vector<int> y2(n, 0);
    
    for(auto& e : x1)
        cin >> e;
    for(auto& e : y1)
        cin >> e;
    for(auto& e : x2)
        cin >> e;
    for(auto& e : y2)
        cin >> e;
    
    int res = 0, ret = 0;
    for(int x : x1)
    {
        for(int y : y1)
        {
            for(int i = 0; i < n; ++i)
            {
                if(x >= x1[i] && x < x2[i] && y >= y1[i] && y < y2[i])
                    ++ret;
            }
            res = max(ret, res);
            ret = 0;
        }
    }
    
    cout << res << endl;
    
    return 0;
}