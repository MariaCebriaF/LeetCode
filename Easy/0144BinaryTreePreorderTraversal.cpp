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

/*
Input: root = [1,null,2,3]

Output: [1,2,3]
Primero izquierda y luego derecha
*/

class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> res;
        if (root == nullptr)
            return res;

        stack<TreeNode *> st;
        st.push(root);

        while (!st.empty())
        {
            TreeNode *nodo = st.top();
            st.pop();

            res.push_back(nodo->val);

            if (nodo->right)
                st.push(nodo->right);
            if (nodo->left)
                st.push(nodo->left);
        }

        return res;
    }
};