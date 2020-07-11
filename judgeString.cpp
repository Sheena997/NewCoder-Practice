/*
链接：https://www.nowcoder.com/questionTerminal/23e5e51acbff44258a54a92bf70a0a49
来源：牛客网

[编程题]验证字符串
热度指数：153时间限制：C/C++ 1秒，其他语言2秒空间限制：C/C++ 32M，其他语言64M
算法知识视频讲解
 给定一个字符串 S，如果 S 满足以下要求中的任意一个则返回 true，否则返回 false:
1. 全部都是大写字母，比如 "BILIBILI"
2. 全部都是小写字母，比如 "bilibili"
3. 首字母大写，比如 "Bilibili"


输入描述:
输入为字符串，且只包含英文字母。


输出描述:
输出为 true 或则 false
示例1
输入
bilibili
输出
true
示例2
输入
BiliBili
输出
false
*/
#include <iostream>
#include <string>

using namespace std;

bool isAllUp(string str)
{
    for(auto& e : str)
    {
        if(e >= 'A' && e <='Z')
            continue;
        else
            return false;
    }
    
    return true;
}
bool isAllLow(string str)
{
    for(auto& e : str)
    {
        if(e >= 'a' && e <= 'z')
            continue;
        else
            return false;
    }
    
    return true;
}
bool isFirstUp(string str)
{
    string tmp(str.begin() + 1, str.end());
    if(str[0] >= 'A' && str[0] <= 'Z' && isAllLow(tmp))
        return true;
    else 
        return false;
}
int main()
{
    string str;
    while(getline(cin, str))
    {
        if(isAllUp(str) || isAllLow(str) || isFirstUp(str))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    
    return 0;
}