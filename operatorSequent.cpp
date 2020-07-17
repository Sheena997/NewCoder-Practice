/*
链接：https://www.nowcoder.com/questionTerminal/913eb9e380274e3c9ba7676d0010cc7b
来源：牛客网

[编程题]操作序列


小易有一个长度为n的整数序列,a_1,...,a_n。然后考虑在一个空序列b上进行n次以下操作:
1、将a_i放入b序列的末尾
2、逆置b序列
小易需要你计算输出操作n次之后的b序列。

输入描述:
输入包括两行,第一行包括一个整数n(2 ≤ n ≤ 2*10^5),即序列的长度。
第二行包括n个整数a_i(1 ≤ a_i ≤ 10^9),即序列a中的每个整数,以空格分割。


输出描述:
在一行中输出操作n次之后的b序列,以空格分割,行末无空格。
示例1
输入
4
1 2 3 4
输出
4 2 1 3
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    while(cin >> n)
    {
        vector<long> vc(n, 0);
        for(auto& e : vc)
            cin >> e;
        
        if(n & 1)
        {
            for(int i = vc.size() - 1; i >= 0; i -= 2)
                cout << vc[i] << " ";
            for(int i = 1; i < vc.size(); i += 2)
                (i == n - 1) ? cout << vc[i] <<endl : cout << vc[i] << " "; 
        }
        else
        {
            for(int i = vc.size() - 1; i >= 0; i -= 2)
                cout << vc[i] << " ";
            for(int i = 0; i < vc.size(); i += 2)
                (i == n - 1) ? cout << vc[i] << endl : cout << vc[i] << " ";
        }
    }
    
    return 0;
}