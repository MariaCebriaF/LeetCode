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
    int dfs(TreeNode *root, int actual)
    {
        if (!root)
            return 0;

        actual = ((actual << 1) | root->val);
        if (!root->left && !root->right)
            return actual;

        return dfs(root->left, actual) + dfs(root->right, actual);
    }

    int sumRootToLeaf(TreeNode *root)
    {
        return dfs(root, 0);
    }
};