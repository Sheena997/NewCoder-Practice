/*
���ӣ�https://www.nowcoder.com/questionTerminal/d25162386a3140cbbe6dc071e1eb6ed6
��Դ��ţ����

[�����]�û�ϲ��

Ϊ�˲����Ż��Ƽ�Ч��������ͷ��ÿ��Ҫ�洢�ʹ��������ݡ�����������һ�ֳ�����
���Ƕ��û��������ǵ�ע��ʱ���Ⱥ�����ţ�����һ�����£�ÿ���û����в�ͬ��ϲ��ֵ��
���ǻ���֪��ĳһ��ʱ����ע����û������������һ���û����У��ж����û�����������
ϲ��ֵΪk����ΪһЩ�����ԭ�򣬲������һ����ѯ���û�������ȫ������һ����ѯ���û�����(������L1<=L2<=R2<=R1)��

��������:
���룺 ��1��Ϊn�����û��ĸ��� ��2��Ϊn����������i�������û����Ϊi���û���ĳ����
�µ�ϲ�ö� ��3��Ϊһ��������q�����ѯ������  ��4�е��ڣ�3+q���У�ÿ�а���3������
l,r,k����һ���ѯ�������Ϊl<=i<=r���û��ж���������ϲ��ֵΪk���û��ĸ����� ����
��Χn <= 300000,q<=300000 k������


�������:
�����һ��q�У�ÿ��һ����������ϲ��ֵΪk���û��ĸ���
ʾ��1
����
5
1 2 3 3 5
3
1 2 1
2 4 5
3 5 3
���
1
0
2
˵��
��������:
��5���û���ϲ��ֵΪ�ֱ�Ϊ1��2��3��3��5��
��һ��ѯ�ʶ��ڱ��[1,2]���û�ϲ��ֵΪ1���û��ĸ�����1
�ڶ���ѯ�ʶ��ڱ��[2,4]���û�ϲ��ֵΪ5���û��ĸ�����0
������ѯ�ʶ��ڱ��[3,5]���û�ϲ��ֵΪ3���û��ĸ�����2
*/

#include <iostream>
#include <vector>

using namespace std;

void userHobby(vector<int> hobby, vector<vector<int>> sel, vector<int>& res)
{
    for(int i = 0; i < sel.size(); ++i)
    {
        int l = sel[i][0] - 1, r = sel[i][1] - 1, key = sel[i][2];
        int count = 0;
        for(int j = l; j <= r; ++j)
        {
            if(key == hobby[j])
                ++count;
        }
        res[i] = count;
    }
}
int main()
{
    int n = 0;
    while(cin >> n)
    {
        vector<int> hobby(n, 0);
        for(auto& e : hobby)
            cin >> e;
        int group = 0;
        cin >> group;
        vector<vector<int>> sel(group, vector<int>(3, 0));
        for(int i = 0; i < group; ++i)
        {
            for(int j = 0; j < 3; ++j)
                cin >> sel[i][j];
        }
        
        vector<int> res(group, 0);
        
        userHobby(hobby, sel, res);
        
        for(auto e : res)
            cout << e << endl;
    }
    
    return 0;
}
