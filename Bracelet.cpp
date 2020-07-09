/*
链接：https://www.nowcoder.com/questionTerminal/0bb1fad52f474bdaa4d7636ca3a98244?f=discussion
来源：牛客网

[编程题]手串


作为一个手串艺人，有金主向你订购了一条包含n个杂色串珠的手串——每个串珠要么无色，要么涂了若干种颜色。
为了使手串的色彩看起来不那么单调，金主要求，手串上的任意一种颜色（不包含无色），在任意连续的m个串
珠里至多出现一次（注意这里手串是一个环形）。手串上的颜色一共有c种。现在按顺时针序告诉你n个串珠的手
串上，每个串珠用所包含的颜色分别有哪些。请你判断该手串上有多少种颜色不符合要求。即询问有多少种颜色
在任意连续m个串珠中出现了至少两次。


输入描述:
第一行输入n，m，c三个数，用空格隔开。(1 <= n <= 10000, 1 <= m <= 1000, 1 <= c <= 50) 接下来n行每行的
第一个数num_i(0 <= num_i <= c)表示第i颗珠子有多少种颜色。接下来依次读入num_i个数字，每个数字x表示第i颗
柱子上包含第x种颜色(1 <= x <= c)

输出描述:
一个非负整数，表示该手链上有多少种颜色不符需求。
示例1
输入
5 2 3
3 1 2 3
0
2 2 3
1 2
1 3
输出
2
说明
第一种颜色出现在第1颗串珠，与规则无冲突。
第二种颜色分别出现在第 1，3，4颗串珠，第3颗与第4颗串珠相邻，所以不合要求。
第三种颜色分别出现在第1，3，5颗串珠，第5颗串珠的下一个是第1颗，所以不合要求。
总计有2种颜色的分布是有问题的。 
这里第2颗串珠是透明的。
*/

/*
1.滑动窗口法，先初始化一个宽度为m的窗口，map键为颜色，值为出现的次数
2.接着滑动串口，上一个位置处的每种颜色在map中对应的值减一,同时判断下一个位置处的颜色是否在map中已出现，并且次数加一
3.通过当前位置加上间隔实现环形检测
*/
#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main()
{
    int n, m, c;
    cin >> n >> m >> c;
    vector<vector<int>> arr(n, vector<int>(c, 0));
    for (int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        while (tmp--)
        {
            cin >> arr[i][tmp];
        }
    }
    
    map<int, int> mp;
    set<int> res;
	//第一个窗口
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < c && arr[i][j] != 0; ++j)
        {
            if (mp[arr[i][j]] > 0)
                res.insert(arr[i][j]);
            ++mp[arr[i][j]];
        }
    }
    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < c && arr[i - 1][j] != 0; ++j)
            mp[arr[i - 1][j]]--;
        int tmp = (i + m - 1) % n;//为了循环，手串是环形的 (5 + 2 - 1) % 5 = 1
        for (int j = 0; j < c && arr[tmp][j] != 0; ++j)
        {
            if (mp[arr[tmp][j]] > 0)
                res.insert(arr[tmp][j]);
            ++mp[arr[tmp][j]];
        }
    }
    cout << res.size();
    return 0;
}