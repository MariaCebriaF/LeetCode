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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        stack<TreeNode *> st_p;
        stack<TreeNode *> st_q;

        st_p.push(p);
        st_q.push(q);

        while (!st_p.empty() && !st_q.empty())
        {
            TreeNode *node_p = st_p.top();
            st_p.pop();
            TreeNode *node_q = st_q.top();
            st_q.pop();

            if (!node_p && !node_q)
                continue;

            if (!node_p || !node_q || node_p->val != node_q->val)
                return false;

            st_p.push(node_p->right);
            st_q.push(node_q->right);

            st_p.push(node_p->left);
            st_q.push(node_q->left);
        }

        return st_p.empty() && st_q.empty();
    }
};