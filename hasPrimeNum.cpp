/*
牛牛现在有一个包含N的正整数的数组a，牛牛可以将其中的每个数a[i] 都拆成若干
个和为 a[i] 的整数，牛牛想知道这个数组最多能有多少素数？
输入：
n  数组长度
n个整数 a[i]
1 <= n <= le6     1 <= a[i] <= le9
*/
int main()
{
	int n = 0;
	while (cin >> n)
	{
		vector<int> vc(n, 0);
		long res = 0;
		for (auto& e : vc)
		{
			cin >> e;
			res += (e / 2);
		}
		cout << res << endl;
	}
	

	return 0;
}