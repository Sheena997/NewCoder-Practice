/*
���ӣ�https://www.nowcoder.com/questionTerminal/c3b49a12eb344ca3939f6a6232347397
��Դ��ţ����

[�����]һ������ֱ�ŵ����������������ֻ������һ�Σ��������ҳ���


һ������ֱ�ŵ���������������֮�⣬�����ı�Ŷ����������Ρ�
��д�����ҳ�������ֻ����һ�εı�š�Ҫ��ʱ�临�Ӷ���O(n)���ռ临�Ӷ���O(1)��

��������:
��������
���Ȳ�����1000000


�������:
���������2��ֻ������һ�ε���
�������С����
ʾ��1
����
1
2
3
4
5
2
3
4
5
6
���
1 6

��ע:
���Կ��������´�����Ϊģ�壬ʵ�����е�getNumber()������

#include <bits/stdc++.h>
using namespace std;
int a[1000001];
void getNumber(const int a[], int n, int&num1, int&num2) {
//����ʵ�֣�Ҫ��ʱ��O(n),�ռ�O(1)��
}
int main(void) {
int n = 0;
while (~scanf("%d",&a[n+1])) ++n;
int p,q;
getNumber(a,n,p,q);
if (p>q) swap(p,q);
printf("%d %d\n",p,q);
return 0;
}
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vc;
    int tmp = 0, ret = 0;
    while(cin >> tmp)
    {
        vc.push_back(tmp);
        ret ^= tmp;
    }
    int n = ret & (-ret);
    vector<int> res(2, 0);
    for(auto e : vc)
    {
        if(e & n)
            res[0] ^= e;
        else
            res[1] ^= e;
    }
    
    if(res[0] < res[1])
        cout << res[0] << " " << res[1] << endl;
    else
        cout << res[1] << " " << res[0] << endl;
    
    return 0;
}