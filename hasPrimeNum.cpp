/*
ţţ������һ������N��������������a��ţţ���Խ����е�ÿ����a[i] ���������
����Ϊ a[i] ��������ţţ��֪���������������ж���������
���룺
n  ���鳤��
n������ a[i]
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