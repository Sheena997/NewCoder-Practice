/*
PΪ�����Ķ�άƽ�������㼯������ P ��ĳ��x�����x���� P ������㶼���� x �����Ϸ������ڣ��������궼����x���������Ϊ�����ġ���������С����ġ���ļ��ϡ������е�ĺ�����������궼���ظ�, �����᷶Χ��[0, 1e9) �ڣ�

����ͼ��ʵ�ĵ�Ϊ���������ĵ�ļ��ϡ���ʵ�ִ����ҵ����� P �е����� ����� ��ļ��ϲ������



˼·��

�������еĵ��Ȱ���y�Ӵ�С����O(NlongN)

�Ӵ�С�����ź���ĵ㼯����ǰy�ǳ��ֹ�������y��������Ҫ�Ľ�����������O(N)��

����ʱ�临�Ӷ�ΪO(NlogN)
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
