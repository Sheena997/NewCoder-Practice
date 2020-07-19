/*
链接：https://www.nowcoder.com/questionTerminal/c3b49a12eb344ca3939f6a6232347397
来源：牛客网

[编程题]一组带数字编号的球，其中有两个编号只出现了一次，把它们找出来


一组带数字编号的球里除了两个编号之外，其它的编号都出现了两次。
请写程序找出这两个只出现一次的编号。要求时间复杂度是O(n)，空间复杂度是O(1)。

输入描述:
整形数组
长度不超过1000000


输出描述:
输出数组中2个只出现了一次的数
先输出较小的数
示例1
输入
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
输出
1 6

备注:
可以考虑以以下代码作为模板，实现其中的getNumber()函数。

#include <bits/stdc++.h>
using namespace std;
int a[1000001];
void getNumber(const int a[], int n, int&num1, int&num2) {
//自行实现，要求时间O(n),空间O(1)。
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