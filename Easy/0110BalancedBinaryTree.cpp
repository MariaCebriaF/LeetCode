
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
    bool isBalanced(TreeNode *root)
    {
        return altura(root) != -1;
    }

private:
    int altura(TreeNode *nodo)
    {
        if (!nodo)
            return 0;

        int izq = altura(nodo->left);
        if (izq == -1)
            return -1;

        int der = altura(nodo->right);
        if (der == -1)
            return -1;

        if (abs(izq - der) > 1)
            return -1;

        return 1 + max(izq, der);
    }
};