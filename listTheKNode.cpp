/*
���ӣ�https://www.nowcoder.com/questionTerminal/0cff324157a24a7a8de3da7934458e34
��Դ��ţ����

[�����]�ҳ����������е�һ���ڵ㣬�ýڵ㵽βָ��ľ���ΪK


�ҳ����������е�һ���ڵ㣬�ýڵ㵽βָ��ľ���ΪK������ĵ�����0�����Ϊ�����βָ�롣
Ҫ��ʱ�临�Ӷ�ΪO(n)��
�����㶨�����£�
struct ListNode
{
    int m_nKey;
    ListNode* m_pNext;
}
����ڵ��ֵ��ʼ��Ϊ1��2��3��4��5��6��7��

��������:
�ýڵ㵽βָ��ľ���K


�������:
���ظõ�������ĵ�����K���ڵ㣬����ڵ��ֵ
ʾ��1
����
2
���
6
*/
#include <iostream>

using namespace std;
typedef struct ListNode
{
    int m_nKey;
    ListNode* m_pNext;
    ListNode(int x)
        :m_nKey(x)
        ,m_pNext(nullptr)
    {}
}ListNode;

void InitList(ListNode* lst)
{
    ListNode* p = lst;
    for(int i = 2; i <= 7; ++i)
    {
        ListNode* node = new ListNode(i);
        p->m_pNext = node;
        p = node;
    }
}
int main()
{
    ListNode* lst = new ListNode(1);
    InitList(lst);
    int k = 0;
    while(cin >> k)
    {
        ListNode* fast = lst;
        ListNode* slow = lst;
        
        while(k--)
            fast = fast->m_pNext;
        while(fast)
        {
            fast = fast->m_pNext;
            slow = slow->m_pNext;
        }
        
        cout << slow->m_nKey << endl;
    }
    
    return 0;
}