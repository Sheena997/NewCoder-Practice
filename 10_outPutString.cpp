/*
链接：https://www.nowcoder.com/questionTerminal/16f59b169d904f8898d70d81d4a140a0?answerType=1&f=discussion
来源：牛客网
输入一个英文句子，把句子中的单词(不区分大小写)按出现次数按从多到少把单词和次数在屏幕上输出来，要求能识别英文句号和逗号，即是说单词由空格、句号和逗号隔开。
输入描述:
输入有若干行，总计不超过1000个字符。
输出描述:
输出格式参见样例。
示例1
输入
A blockhouse is a small castle that has four openings through which to shoot.
输出
a:2
blockhouse:1
castle:1
four:1
has:1
is:1
openings:1
shoot:1
small:1
that:1
through:1
to:1
which:1
*/
#include <iostream>
#include <string>
#include <map>

using namespace std;

void outPutString(string s)
{
    map<string, int> mp;
    int i = 0;
    string tmp = "";
    while(i < s.size())
    {
        if(s[i] == ' ' || s[i] == '.' || s[i] == ',')
        {
            if(tmp != "")
                ++mp[tmp];
            tmp = "";
        }
        else
        {
            s[i] |= 32;
            tmp += s[i];
        }
        ++i;
    }
    
    auto it = mp.begin();
    while(it != mp.end())
    {
        cout << it->first << ":" << it->second << endl;
        ++it;
    }
}
int main()
{
    string s;
    while(getline(cin,s))
    {
        outPutString(s);
    }
    
    return 0;
}