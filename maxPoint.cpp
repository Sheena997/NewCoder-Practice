/*
���ӣ�https://ac.nowcoder.com/questionTerminal/ea209d6014c44763a41ee04a11bf2ef1?toCommentId=1682672
��Դ��ţ����

[�����]�����1
PΪ�����Ķ�άƽ�������㼯������ P ��ĳ��x�����x���� P ������㶼���� x �����Ϸ������ڣ��������궼����x����
�����Ϊ�����ġ���������С����ġ���ļ��ϡ������е�ĺ�����������궼���ظ�, �����᷶Χ��[0, 1e9) �ڣ�
����ͼ��ʵ�ĵ�Ϊ���������ĵ�ļ��ϡ���ʵ�ִ����ҵ����� P �е����� ����� ��ļ��ϲ������

��������:
��һ������㼯�ĸ��� N�� ������ N �У�ÿ���������ִ����� X ��� Y �ᡣ
���� 50%������,  1 <= N <= 10000;
���� 100%������, 1 <= N <= 500000;


�������:
��������ġ� �㼯�ϣ� ���� X ���С����ķ�ʽ�����ÿ���������ֱַ������ X ��� Y�ᡣ
ʾ��1
����
5
1 2
5 3
4 6
7 5
9 0
���
4 6
7 5
9 0
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
        vector<pair<int, int>> vp;
        for(int i = 0; i < n; ++i)
        {
            int x = 0, y = 0;
            scanf("%d%d", &x, &y);
            vp.push_back(make_pair(x, y));
        }
        
        sort(vp.begin(), vp.end(), [](pair<int, int>& p1, pair<int, int>& p2)->bool{
            return p1.second > p2.second;
        });
        
        int maxNum = -1;
        for(pair<int, int> e : vp)
        {
            if(e.first > maxNum)
            {
                printf("%d %d\n", e.first, e.second);
                maxNum = e.first;
            }
        }
    }
    return 0;
}
