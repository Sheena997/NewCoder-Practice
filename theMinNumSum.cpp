/*
链接：https://www.nowcoder.com/questionTerminal/4fc97c45a69241e992b3e705e817909c
来源：牛客网

[编程题]最小数位和

定义\mathit S(n)S(n)，表示\mathit nn在十进制下的各位数字和。
现在给定一个\mathit xx,请你求出最小正整数\mathit nn，满足x \leq S(n)x≤S(n).

输入描述:
第一行数据组数\mathit TT，对于每组数据，一行一个数字\mathit xx。
1 \leq x \leq 10^5 , 1 \leq T \leq 101≤x≤10 
5
 ,1≤T≤10


输出描述:
对于每组数据，一行一个整数表示最小的\mathit nn。
示例1
输入
2
7
9 
输出
7
9
示例2
输入
2 
13
18
输出
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