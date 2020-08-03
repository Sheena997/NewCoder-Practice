/*
来源：牛客
链接：https://www.nowcoder.com/practice/8a19cbe657394eeaac2f6ea9b0f6fcf6?tpId=13&tqId=11157&tPage=1&rp=1&ru=%2Fta%2Fcoding-interviews&qru=%2Fta%2Fcodinginterviews%2Fquestion-ranking
题目描述
输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结
果中都不含重复的数字。例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，
则重建二叉树并返回。
*/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* _reConstructBinaryTree(vector<int> pre, vector<int> vin, int pre_start, int pre_end, int vin_start, int vin_end)
    {
        if(pre_start > pre_end || vin_start > vin_end)
            return nullptr;
        TreeNode* root = new TreeNode(pre[pre_start]);
        
        for(int i = vin_start; i <= vin_end; ++i)
        {
            if(vin[i] == pre[pre_start])
            {
                root->left = _reConstructBinaryTree(pre, vin, pre_start + 1, pre_start + i - vin_start , vin_start, i - 1);
                root->right = _reConstructBinaryTree(pre, vin, pre_start + i - vin_start + 1, pre_end, i + 1, vin_end);
            }
        }
        
        return root;
    }
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(pre.empty() || vin.empty())
            return nullptr;
        
        return _reConstructBinaryTree(pre, vin, 0, pre.size() - 1, 0, vin.size() - 1);
    }
};