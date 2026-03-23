/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        if (root == nullptr)
            return true;

        return Simetria(root->left, root->right);
    }

private:
    bool Simetria(TreeNode *izq, TreeNode *dcha)
    {
        if (!izq && !dcha)
            return true;
        if (!izq || !dcha)
            return false;
        if (izq->val != dcha->val)
            return false;
        return Simetria(izq->left, dcha->right) && Simetria(izq->right, dcha->left);
    }
};
