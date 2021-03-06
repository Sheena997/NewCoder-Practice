/*
链接：https://www.nowcoder.com/questionTerminal/a3e4762129bd4e30901586faffe92899?orderByHotValue=1&amp;mutiTagIds=595&amp;page=8&amp;onlyReference=false
来源：牛客网

[编程题]编程题2


有n个房间，现在i号房间里的人需要被重新分配，分配的规则是这样的：先让i号房间里的人全都出来，
接下来按照 i+1, i+2, i+3, ... 的顺序依此往这些房间里放一个人，n号房间的的下一个房间是1号房间，
直到所有的人都被重新分配。
现在告诉你分配完后每个房间的人数以及最后一个人被分配的房间号x，你需要求出分配前每个房间的人数。
数据保证一定有解，若有多解输出任意一个解。

输入描述:
第一行两个整数n, x (2<=n<=10^5, 1<=x<=n)，代表房间房间数量以及最后一个人被分配的房间号；
第二行n个整数 a_i(0<=a_i<=10^9) ，代表每个房间分配后的人数。

输出描述:
输出n个整数，代表每个房间分配前的人数。
示例1
输入
3 1
6 5 1
输出
4 4 4
*/
#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main()
{
    int n = 0, x = 0;
    while(cin >> n >> x)
    {
        vector<long> room(n, 0);
        long minNum = INT_MAX;
        for(int i = 0; i < n; ++i)
        {
            cin >> room[i];
            minNum = min(minNum, room[i]);
        }
        
        for(auto& e : room)
            e -= minNum;
        minNum *= n;
        while(1)
        {
            if(room[(x - 1 + n) % n] == 0)
            {
                room[(x - 1 + n) % n] = minNum;
                break;
            }
            else
            {
                --room[(x - 1 + n) % n];
                --x;
                ++minNum;
            }
        }
        for(auto e : room)
            cout << e << " ";
    }
    
    return 0;
}