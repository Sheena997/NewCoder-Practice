/*
链接：https://www.nowcoder.com/practice/d0267f7f55b3412ba93bd35cfa8e8035?tpId=13&tqId=11156&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
题目描述
输入一个链表，按链表从尾到头的顺序返回一个ArrayList。
*/
/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
    public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> v;
        ListNode* cur = head;
        while(cur != NULL)
        {
            v.push_back(cur->val);
            cur = cur -> next;
        }
        reverse(v.begin(), v.end());
        return v;
    }
};