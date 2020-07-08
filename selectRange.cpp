/*
����һ����������, ��Ҫ��ѡ��һ������, ʹ�ø����������������о������¼����ֵ����һ����
�����е���С�� * �����������ĺ�����������������������ֵ���ɣ�����Ҫ�����������䡣
���������  [6 2 1]�����������ʽ, �ɵõ����п���ѡ����������ļ���ֵ:

[6] = 6 * 6 = 36;

[2] = 2 * 2 = 4;

[1] = 1 * 1 = 1;

[6,2] = 2 * 8 = 16;

[2,1] = 1 * 3 = 3;

[6, 2, 1] = 1 * 9 = 9;

 

����������ɼ�ѡ������ [6] ������ֵΪ 36�� ��������Ϊ 36��

�����ڵ��������ֶ���[0, 100]�ķ�Χ��;
*/
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
	int n = 0;
	while (cin >> n)
	{
		vector<int> vc(n, 0);
		for (auto& e : vc)
			cin >> e;
		set<int> s(vc.begin(), vc.end());
		long long res = 0;

		for (int c : s)
		{
			int cur = 0, maxNum = -1;
			for (int i = 0; i < n; ++i)
			{
				if (vc[i] >= c)
				{
					cur += vc[i];
					maxNum = max(maxNum, cur);
				}
				else
				{
					cur = 0;
				}
			}
			res = res > maxNum * c ? res : maxNum * c;
		}

		cout << res << endl;
	}

	return 0;
}