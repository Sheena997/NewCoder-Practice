/*
链接：https://www.nowcoder.com/questionTerminal/2ee36922acfe4b26bb7cceb5fc9a89a2
来源：牛客网

[编程题]幂运算


给定两个数R和n，输出R的n次方，其中0.0<R<99.999, 0<n<=25

输入描述:
多组测试用例，请参考例题的输入处理 输入每行一个浮点数 R 其中0.0 < R <99.999， 一个整数 n 其中0 < n <=25


输出描述:
输出R的n次方
示例1
输入
95.123 12 0.1 1
输出
548815620517731830194541.899025343415715973535967221869852721 0.1
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string getTheMultiString(string& res, string& str)
{
    int len1 = str.size(), len2 = res.size();
    string ret(len1 + len2, '0');
    for(int i = len2 - 1; i >= 0; --i)
    {
        for(int j = len1 - 1; j >= 0; --j)
        {
            int tmp = ret[i + j + 1] - '0' + (str[j] - '0') * (res[i] - '0');
            ret[i + j + 1] = tmp % 10 + '0';
            ret[i + j] += tmp / 10;
        }
    }
    
    for(int i = 0; i < ret.size(); ++i)
    {
        if(ret[i]!= '0')
            return ret.substr(i);
    }
    
    return "0";
}
int main()
{
    string str;
    int n = 0;
    while(cin >> str >> n)
    {
        auto index = str.find('.');
        if(index != string::npos)
            str.erase(str.begin() + index, str.begin() + index + 1);
        string res = str;
        for(int i = 0; i < n - 1; ++i)
            res = getTheMultiString(res, str);
        
        if(index != string::npos)
        {
            int retindex = (str.size() - index) * n;
            while(n >= res.size())
                res.insert(res.begin(), '0');
                
            res.insert(res.end() - retindex, '.');
            auto zero = res.find_last_not_of('0');
            if(zero != string::npos)
                res.erase(res.begin() + zero + 1, res.end());
        }
        
        cout << res << endl;
    }
    
    return 0;
}