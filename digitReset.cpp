/*
链接：https://www.nowcoder.com/questionTerminal/f970201e9f7e4040ab25a40918e27d15
来源：牛客网

[编程题]数位重排


牛牛有一个正整数x,牛牛需要把数字x中的数位进行重排得到一个新数(不同于x的数),牛牛想知
道这个新数是否可能是原x的倍数。请你来帮他解决这个问题。

输入描述:
输入包括t+1行,第一行包括一个整数t(1 ≤ t ≤ 10),
接下来t行,每行一个整数x(1 ≤ x ≤ 10^6)


输出描述:
对于每个x,如果可能重排之后变为自己的倍数输出"Possible", 否则输出"Impossible".
示例1
输入
2
14
1035
输出
Impossible
Possible
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    while(n--)
    {
        int a = 0;
        cin >> a;
        string str1 = to_string(a);
        sort(str1.begin(), str1.end());
        for(int i = 2; i <= 10; ++i)
        {
            int ret = a * i;
            string str2 = to_string(ret);
            if(str1.size() > str2.size())
            {
                cout << "Impossible" << endl;
                break;
            }
            else
            {
                sort(str2.begin(), str2.end());
                if(str1 == str2)
                {
                    cout << "Possible" << endl;
                    break;
                }
            }
            if(i == 10)
                cout << "Impossible" << endl;
        }
    }
    
    return 0;
}