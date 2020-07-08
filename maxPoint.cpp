/*
P为给定的二维平面整数点集。定义 P 中某点x，如果x满足 P 中任意点都不在 x 的右上方区域内（横纵坐标都大于x），则称其为“最大的”。求出所有“最大的”点的集合。（所有点的横坐标和纵坐标都不重复, 坐标轴范围在[0, 1e9) 内）

如下图：实心点为满足条件的点的集合。请实现代码找到集合 P 中的所有 ”最大“ 点的集合并输出。



思路：

对于所有的点先按照y从大到小排序O(NlongN)

从大到小遍历排好序的点集，当前y是出现过的最大的y，即是需要的结果，进行输出O(N)。

总体时间复杂度为O(NlogN)
*/
#include <iostream>
#include <vector>
#include <algorithm>>
 
using namespace std;
 
int main()
{
    int n = 0;
    while(cin >> n)
    {
        vector<pair<int, int>> vp;
        for(int i = 0; i < n; ++i)
        {
            int x = 0, y = 0;
            cin >> x >> y;
            vp.push_back(make_pair(x, y));
        }
         
        sort(vp.begin(), vp.end(), [](pair<int, int>& p1, pair<int, int>& p2)->bool{
            return p1.second > p2.second;
        });
         
        int max = -1;
        for(pair<int, int>& e : vp)
        {
            if(e.first > max)
            {
                cout << e.first << " " << e.second << endl;
                max = e.first;
            }
        }
    }
     
    return 0;
}
