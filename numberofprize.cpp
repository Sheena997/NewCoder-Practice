
/*���л��������������A��B��C��
����һ��������������Ի�һ������
����
����������ͬ��������Ի�һ������
��A B C����ͬʱ���ǿ��Ի�1������
�����Ի���������

������Ʒ���������Ի�һ������ģ����ָ�
һ�����Ի�һ����Ʒ������໻������Ʒ��

���룺4 4 2
�����3

���룺9 3 3
�����4
*/

//�ж��Ƿ���Զһ���k����Ʒ�����ϣ���һ�k����Ʒ��
//��ôa��b��c������Ʒ������Ҫ2*k������Ϊ�����������Ի�һ��
//�����������ֵ����Сֵ֮�䣬дһ�������жϽ���Ƿ�Ϸ���Ȼ�󲻶���С���伴��
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