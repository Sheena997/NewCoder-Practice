/*
���ӣ�https://www.nowcoder.com/questionTerminal/23e5e51acbff44258a54a92bf70a0a49
��Դ��ţ����

[�����]��֤�ַ���
�ȶ�ָ����153ʱ�����ƣ�C/C++ 1�룬��������2��ռ����ƣ�C/C++ 32M����������64M
�㷨֪ʶ��Ƶ����
 ����һ���ַ��� S����� S ��������Ҫ���е�����һ���򷵻� true�����򷵻� false:
1. ȫ�����Ǵ�д��ĸ������ "BILIBILI"
2. ȫ������Сд��ĸ������ "bilibili"
3. ����ĸ��д������ "Bilibili"


��������:
����Ϊ�ַ�������ֻ����Ӣ����ĸ��


�������:
���Ϊ true ���� false
ʾ��1
����
bilibili
���
true
ʾ��2
����
BiliBili
���
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