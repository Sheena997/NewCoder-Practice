/*
���ӣ�https://www.nowcoder.com/questionTerminal/0bb1fad52f474bdaa4d7636ca3a98244?f=discussion
��Դ��ţ����

[�����]�ִ�


��Ϊһ���ִ����ˣ��н������㶩����һ������n����ɫ������ִ�����ÿ������Ҫô��ɫ��ҪôͿ����������ɫ��
Ϊ��ʹ�ִ���ɫ�ʿ���������ô����������Ҫ���ִ��ϵ�����һ����ɫ����������ɫ����������������m����
�����������һ�Σ�ע�������ִ���һ�����Σ����ִ��ϵ���ɫһ����c�֡����ڰ�˳ʱ���������n���������
���ϣ�ÿ������������������ɫ�ֱ�����Щ�������жϸ��ִ����ж�������ɫ������Ҫ�󡣼�ѯ���ж�������ɫ
����������m�������г������������Ρ�


��������:
��һ������n��m��c���������ÿո������(1 <= n <= 10000, 1 <= m <= 1000, 1 <= c <= 50) ������n��ÿ�е�
��һ����num_i(0 <= num_i <= c)��ʾ��i�������ж�������ɫ�����������ζ���num_i�����֣�ÿ������x��ʾ��i��
�����ϰ�����x����ɫ(1 <= x <= c)

�������:
һ���Ǹ���������ʾ���������ж�������ɫ��������
ʾ��1
����
5 2 3
3 1 2 3
0
2 2 3
1 2
1 3
���
2
˵��
��һ����ɫ�����ڵ�1�Ŵ��飬������޳�ͻ��
�ڶ�����ɫ�ֱ�����ڵ� 1��3��4�Ŵ��飬��3�����4�Ŵ������ڣ����Բ���Ҫ��
��������ɫ�ֱ�����ڵ�1��3��5�Ŵ��飬��5�Ŵ������һ���ǵ�1�ţ����Բ���Ҫ��
�ܼ���2����ɫ�ķֲ���������ġ� 
�����2�Ŵ�����͸���ġ�
*/

/*
1.�������ڷ����ȳ�ʼ��һ������Ϊm�Ĵ��ڣ�map��Ϊ��ɫ��ֵΪ���ֵĴ���
2.���Ż������ڣ���һ��λ�ô���ÿ����ɫ��map�ж�Ӧ��ֵ��һ,ͬʱ�ж���һ��λ�ô�����ɫ�Ƿ���map���ѳ��֣����Ҵ�����һ
3.ͨ����ǰλ�ü��ϼ��ʵ�ֻ��μ��
*/
#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main()
{
    int n, m, c;
    cin >> n >> m >> c;
    vector<vector<int>> arr(n, vector<int>(c, 0));
    for (int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        while (tmp--)
        {
            cin >> arr[i][tmp];
        }
    }
    
    map<int, int> mp;
    set<int> res;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < c && arr[i][j] != 0; ++j)
        {
            if (mp[arr[i][j]] > 0)
                res.insert(arr[i][j]);
            ++mp[arr[i][j]];
        }
    }
    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < c && arr[i - 1][j] != 0; ++j)
            mp[arr[i - 1][j]]--;
        int tmp = (i + m - 1) % n;//Ϊ��ѭ�����ִ��ǻ��ε� (5 + 2 - 1) % 5 = 1
        for (int j = 0; j < c && arr[tmp][j] != 0; ++j)
        {
            if (mp[arr[tmp][j]] > 0)
                res.insert(arr[tmp][j]);
            ++mp[arr[tmp][j]];
        }
    }
    cout << res.size();
    return 0;
}