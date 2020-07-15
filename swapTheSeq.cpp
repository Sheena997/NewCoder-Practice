/*
链接：https://www.nowcoder.com/questionTerminal/2d2d27effda849968aaab26f37b83c52
来源：牛客网

[编程题]序列交换


小易给你一个包含n个数字的数组a_1,a_2,…,a_3a 
。你可以对这个数组执行任意次以下交换操作：
对于数组中的两个下标i,j(1<=i,j<=n)，如果a_i+a_j  ai+aj为奇数，就可以交换a_i
?和a_j。
现在允许你使用操作次数不限，
小易希望你能求出在所有能通过若干次操作可以得到的数组中，字典序最小的一个是什么。

输入描述:
第一行一个整数n；
第二行n个整数a_1,a_2,..,a_na ，表示数组，每两个数字之间用一个空格分隔。
输入保证1 <= n <= 10^5;1<=a_i<=10^91<=n<=10 

输出描述:
n个整数，每两个整数之间用一个空格分隔，表示得到的字典序最小的数组。
示例1
输入
4
7 3 5 1
输出
7 3 5 1
示例2
输入
10
53941 38641 31525 75864 29026 12199 83522 58200 64784 80987
输出
12199 29026 31525 38641 53941 58200 64784 75864 80987 83522
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
        vector<long> vc(n, 0);
        int flag = 0;
        for(auto& e : vc)
        {
            cin >> e;
            if(e & 1)
                ++flag;
        }
        
        if(flag != n && flag != 0)
            sort(vc.begin(), vc.end());
        
        for(auto e : vc)
            cout << e << " ";
        cout << endl;
    }
    
    return 0;
}