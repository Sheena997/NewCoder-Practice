/*
���ӣ�https://www.nowcoder.com/questionTerminal/a174820de48147d489f64103af152709
��Դ��ţ����

[�����]��ƻ��

n ֻ��ţ����һ�ţ�ÿ����ţӵ�� ai ��ƻ����������Ҫ������֮��ת��ƻ����ʹ�����������ţӵ��
��ƻ��������ͬ��ÿһ�Σ���ֻ�ܴ�һֻ��ţ��������ǡ������ƻ������һ����ţ�ϣ���������Ҫ�ƶ�
���ٴο���ƽ��ƻ�������������������� -1��

��������:
ÿ���������һ������������ÿ�����������ĵ�һ�а���һ������ n��1 <= n <= 100������������һ��
���� n ������ ai��1 <= ai <= 100����


�������:
���һ�б�ʾ������Ҫ�ƶ����ٴο���ƽ��ƻ���������������������� -1��
ʾ��1
����
4
7 15 9 5
���
3
*/
#include <iostream>
#include <vector>

using namespace std;

void divideTheApple(vector<int> vc, int sum)
{
    sum /= vc.size();
    int res = 0;
    for(int i = 0; i < vc.size(); ++i)
    {
        if((vc[i] - sum) & 1 == 1)
        {
            cout << "-1" << endl;
            return;
        }
        else
        {
            if(vc[i] - sum > 0)
                res += (vc[i] - sum) / 2;
        }
    }
    cout << res << endl;
}
int main()
{
    int n = 0;
    while(cin >> n)
    {
        vector<int> vc(n, 0);
        int sum = 0;
        for(auto& e : vc)
        {
            cin >> e;
            sum += e;
        }
        
        if(sum % n != 0)
            cout << "-1" << endl;
        else
            divideTheApple(vc, sum);
    }
    
    return 0;
}