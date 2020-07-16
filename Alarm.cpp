/*
链接：https://www.nowcoder.com/questionTerminal/84bab071c3df451f902047a217c5614d
来源：牛客网

[编程题]牛牛的闹钟


牛牛总是睡过头，所以他定了很多闹钟，只有在闹钟响的时候他才会醒过来并且决定起不起床。
从他起床算起他需要X分钟到达教室，上课时间为当天的A时B分，请问他最晚可以什么时间起床

输入描述:
每个输入包含一个测试用例。
每个测试用例的第一行包含一个正整数，表示闹钟的数量N(N<=100)。
接下来的N行每行包含两个整数，表示这个闹钟响起的时间为Hi(0<=A<24)时Mi(0<=B<60)分。
接下来的一行包含一个整数，表示从起床算起他需要X(0<=X<=100)分钟到达教室。
接下来的一行包含两个整数，表示上课时间为A(0<=A<24)时B(0<=B<60)分。
数据保证至少有一个闹钟可以让牛牛及时到达教室。


输出描述:
输出两个整数表示牛牛最晚起床时间。
示例1
输入
3 
5 0 
6 0 
7 0 
59 
6 59
输出
6 0
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector<int> vc;
    while(n--)
    {
        int h = 0, m = 0;
        cin >> h >> m;
        int sum = h * 60 + m;
        vc.push_back(sum);
    }
    
    int minute = 0;
    cin >> minute;
    int class_hour = 0, class_minute = 0;
    cin >> class_hour >> class_minute;
    int class_sum = class_hour * 60 + class_minute;
    int res = vc[0];
    for(int i = 0; i < vc.size(); ++i)
    {
        if(vc[i] + minute <= class_sum && res < vc[i])
            res = vc[i];
    }
    
    cout << res / 60 << " " << res % 60 << endl;
    
    return 0;
}