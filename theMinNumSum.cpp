/*
���ӣ�https://www.nowcoder.com/questionTerminal/4fc97c45a69241e992b3e705e817909c
��Դ��ţ����

[�����]��С��λ��

����\mathit S(n)S(n)����ʾ\mathit nn��ʮ�����µĸ�λ���ֺ͡�
���ڸ���һ��\mathit xx,���������С������\mathit nn������x \leq S(n)x��S(n).

��������:
��һ����������\mathit TT������ÿ�����ݣ�һ��һ������\mathit xx��
1 \leq x \leq 10^5 , 1 \leq T \leq 101��x��10 
5
 ,1��T��10


�������:
����ÿ�����ݣ�һ��һ��������ʾ��С��\mathit nn��
ʾ��1
����
2
7
9 
���
7
9
ʾ��2
����
2 
13
18
���
49  
99

*/
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    while(cin >> n)
    {
        while(n--)
        {
            int x = 0;
            cin >> x;
            
            int n = x / 9;
            int m = x % 9;
            if(m != 0)
                cout << m;
            for(int i = 0; i < n; ++i)
                cout << "9";

            cout << endl;
        }
    }
    
    return 0;
}