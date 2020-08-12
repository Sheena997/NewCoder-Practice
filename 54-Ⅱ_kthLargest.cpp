/*
��ָ Offer 54. �����������ĵ�k��ڵ�
����һ�ö��������������ҳ����е�k��Ľڵ㡣

ʾ�� 1:
����: root = [3,1,4,null,2], k = 1
   3
  / \
 1   4
  \
   2
���: 4
ʾ�� 2:
����: root = [5,3,6,2,4,null,null,1], k = 3
       5
      / \
     3   6
    / \
   2   4
  /
 1
���: 4
 
���ƣ�
1 �� k �� ����������Ԫ�ظ���

ͨ������39,793�ύ����53,73

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/er-cha-sou-suo-shu-de-di-kda-jie-dian-lcof/
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void inOrder(TreeNode* root, vector<int>& ret)
    {
        if(root == nullptr)
            return;
        
        inOrder(root->left, ret);
        ret.push_back(root->val);
        inOrder(root->right, ret);
    }
    int kthLargest(TreeNode* root, int k) {
        vector<int> ret;
        
        inOrder(root, ret);
        
        return ret[ret.size() - k];
    }
};