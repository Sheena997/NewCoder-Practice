/*
链接：https://www.nowcoder.com/questionTerminal/d17cf8815a0745f5bbe856eee123cd24
来源：牛客网



平面内有n个矩形, 第i个矩形的左下角坐标为(x1[i], y1[i]), 右上角坐标为(x2[i], y2[i])。

如果两个或者多个矩形有公共区域则认为它们是相互重叠的(不考虑边界和角落)。

请你计算出平面内重叠矩形数量最多的地方,有多少个矩形相互重叠。


输入描述:
输入包括五行。
第一行包括一个整数n(2 <= n <= 50), 表示矩形的个数。
第二行包括n个整数x1[i](-10^9 <= x1[i] <= 10^9),表示左下角的横坐标。
第三行包括n个整数y1[i](-10^9 <= y1[i] <= 10^9),表示左下角的纵坐标。
第四行包括n个整数x2[i](-10^9 <= x2[i] <= 10^9),表示右上角的横坐标。
第五行包括n个整数y2[i](-10^9 <= y2[i] <= 10^9),表示右上角的纵坐标。


输出描述:
输出一个正整数, 表示最多的地方有多少个矩形相互重叠,如果矩形都不互相重叠,输出1。
示例1
输入
2
0 90
0 90
100 200
100 200
输出
2
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector<int> x1(n, 0);
    vector<int> y1(n, 0);
    vector<int> x2(n, 0);
    vector<int> y2(n, 0);
    
    for(auto& e : x1)
        cin >> e;
    for(auto& e : y1)
        cin >> e;
    for(auto& e : x2)
        cin >> e;
    for(auto& e : y2)
        cin >> e;
    
    int res = 0, ret = 0;
    for(int x : x1)
    {
        for(int y : y1)
        {
            for(int i = 0; i < n; ++i)
            {
                if(x >= x1[i] && x < x2[i] && y >= y1[i] && y < y2[i])
                    ++ret;
            }
            res = max(ret, res);
            ret = 0;
        }
    }
    
    cout << res << endl;
    
    return 0;
}