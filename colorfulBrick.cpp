/*
���ӣ�https://www.nowcoder.com/questionTerminal/35086420bf464fedb5c0c1859982ae87
��Դ��ţ����

[�����]��ɫ��ש��


С����һЩ��ɫ��ש�顣ÿ����ɫ��һ����д��ĸ��ʾ��������ɫש�鿴��������ȫһ����
������һ���������ַ���s,s��ÿ���ַ�����С�׵�ĳ��ש�����ɫ��С����������е�ש
���ų�һ�С����������һ�Բ�ͬ��ɫ������ש��,��ô����ש��ͺ�Ư���ġ��������
С�׼����ж����ַ�ʽ��������ש���ų�Ư����һ�С�(������ַ�ʽ����Ӧ��ש����ɫ��
������ͬ��,��ô��Ϊ�����ַ�ʽ��һ���ġ�)
����: s = "ABAB",��ôС�����������еĽ��:
"AABB","ABAB","ABBA","BAAB","BABA","BBAA"
����ֻ��"AABB"��"BBAA"�������ֻ��һ�Բ�ͬ��ɫ������ש�顣

��������:
�������һ���ַ���s,�ַ���s�ĳ���length(1 �� length �� 50),s�е�ÿһ���ַ���Ϊһ����д��ĸ(A��Z)��


�������:
���һ������,��ʾС�׿����ж����ַ�ʽ��
ʾ��1
����
ABAB
���
2
*/
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string str;
    while(cin >> str)
    {
        set<char> sc;
        for(auto& e : str)
            sc.insert(e);
        
        if(sc.size() == 0)
            cout << "0" << endl;
        else if(sc.size() == 1)
            cout << "1" << endl;
        else if(sc.size() == 2)
            cout << "2" << endl;
        else 
            cout << "0" << endl;
    }
    
    return 0;
}