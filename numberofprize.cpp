
/*汪仔换礼物：有三种礼物A、B、C，
任意一个礼物的两个可以换一个礼物
或者
任意两个不同的礼物可以换一个礼物
当A B C都相同时就是可以换1次礼物
最多可以换几次礼物

三种商品，两个可以换一个任意的，三种各
一个可以换一个奖品，问最多换几个奖品。

输入：4 4 2
输出：3

输入：9 3 3
输出：4
*/

//判断是否可以兑换出k个奖品。如果希望兑换k个奖品，
//那么a、b、c三种商品至少需要2*k个，因为任意两个可以换一个
//三个数的最大值和最小值之间，写一个方法判断结果是否合法，然后不断缩小区间即可
int numberofprize(int a, int b, int c) {
	// write code here
	
	vector<int> vc(3, 0);
	vc[0] = a;
	vc[1] = b;
	vc[2] = c;
	sort(vc.begin(), vc.end());

	int res = vc[0];
	int ret1 = vc[1] - vc[0], ret2 = vc[2] - vc[0];

	int tmp = ret2 - ret1;
	if (ret1 <= tmp / 2)
	{
		res += ret1;
		tmp -= (2 * ret1);
		res += (tmp / 5);
	}
	else
	{
		res += (tmp / 2);
		ret1 -= (tmp / 2);
		res += (ret1 / 2);
	}

	return res;
}
int main()
{
	int a = 9, b = 3, c = 3;

	cout << numberofprize(a, b, c) << endl;
	return 0;

}