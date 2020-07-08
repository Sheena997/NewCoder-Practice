/*
给定一个数组序列, 需要求选出一个区间, 使得该区间是所有区间中经过如下计算的值最大的一个：
区间中的最小数 * 区间所有数的和最后程序输出经过计算后的最大值即可，不需要输出具体的区间。
如给定序列  [6 2 1]则根据上述公式, 可得到所有可以选定各个区间的计算值:

[6] = 6 * 6 = 36;

[2] = 2 * 2 = 4;

[1] = 1 * 1 = 1;

[6,2] = 2 * 8 = 16;

[2,1] = 1 * 3 = 3;

[6, 2, 1] = 1 * 9 = 9;

 

从上述计算可见选定区间 [6] ，计算值为 36， 则程序输出为 36。

区间内的所有数字都在[0, 100]的范围内;
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