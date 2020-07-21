/*
链接：https://www.nowcoder.com/questionTerminal/0cff324157a24a7a8de3da7934458e34
来源：牛客网

[编程题]找出单向链表中的一个节点，该节点到尾指针的距离为K


找出单向链表中的一个节点，该节点到尾指针的距离为K。链表的倒数第0个结点为链表的尾指针。
要求时间复杂度为O(n)。
链表结点定义如下：
struct ListNode
{
    int m_nKey;
    ListNode* m_pNext;
}
链表节点的值初始化为1，2，3，4，5，6，7。

输入描述:
该节点到尾指针的距离K


输出描述:
返回该单向链表的倒数第K个节点，输出节点的值
示例1
输入
2
输出
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