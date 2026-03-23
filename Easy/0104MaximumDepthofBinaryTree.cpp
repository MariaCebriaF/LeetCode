class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;

        int izq = maxDepth(root->left);
        int dcha = maxDepth(root->right);
        return 1 + max(izq, dcha);
    }
};