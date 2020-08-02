/*
链接：https://www.nowcoder.com/questionTerminal/a174820de48147d489f64103af152709
来源：牛客网

[编程题]分苹果

n 只奶牛坐在一排，每个奶牛拥有 ai 个苹果，现在你要在它们之间转移苹果，使得最后所有奶牛拥有
的苹果数都相同，每一次，你只能从一只奶牛身上拿走恰好两个苹果到另一个奶牛上，问最少需要移动
多少次可以平分苹果，如果方案不存在输出 -1。

输入描述:
每个输入包含一个测试用例。每个测试用例的第一行包含一个整数 n（1 <= n <= 100），接下来的一行
包含 n 个整数 ai（1 <= ai <= 100）。


输出描述:
输出一行表示最少需要移动多少次可以平分苹果，如果方案不存在则输出 -1。
示例1
输入
4
7 15 9 5
输出
3
*/
#include <iostream>
#include <vector>

using namespace std;

void divideTheApple(vector<int> vc, int sum)
{
    sum /= vc.size();
    int res = 0;
    for(int i = 0; i < vc.size(); ++i)
    {
        if((vc[i] - sum) & 1 == 1)
        {
            cout << "-1" << endl;
            return;
        }
        else
        {
            if(vc[i] - sum > 0)
                res += (vc[i] - sum) / 2;
        }
    }
    cout << res << endl;
}
int main()
{
    int n = 0;
    while(cin >> n)
    {
        vector<int> vc(n, 0);
        int sum = 0;
        for(auto& e : vc)
        {
            cin >> e;
            sum += e;
        }
        
        if(sum % n != 0)
            cout << "-1" << endl;
        else
            divideTheApple(vc, sum);
    }
    
    return 0;
}